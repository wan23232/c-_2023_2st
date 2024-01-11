#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;

// Cooker클래스는 abstract class로서 인터페이스를 상속받기 위한 것이다.
class Cooker{
	public:
	// 필요한 부분을 정의하라.
	Cooker(){}
	virtual void Cook(int a)=0;
};

class FryMachine{   // 튀김기계. 이 클래스는 수정하지 않는다.
	public:
		void fry(int numChick){
			for (int i=0; i<numChick; i++){
				cout << "튀김기에 튀깁니다." << endl; 
			}
		}
};

class SteamMachine{  // 찜 기계. 이 클래스는 수정하지 않는다.
	public:
		void steam(int numChick){
			for (int i=0; i<numChick; i++){
				cout << "찜기에 찝니다." << endl;
			}
		}
};

//class FriedChickenMaker 은 class adapter패턴을 이용한다.

class FriedChickenMaker:public FryMachine, public Cooker{
	public:
		FriedChickenMaker():Cooker(){}
		void Cook(int a)override{
			FryMachine::fry(a);

		}
};
		
		
//class SteamedChickenMaker 은 object adapter패턴을 이용한다.
class SteamedChickenMaker:public Cooker{
	public:
		SteamedChickenMaker(){
			st=new SteamMachine();
		}
		void Cook(int a)override{
			st->steam(a);
		}
	private:
		SteamMachine *st;

};
// ChickenShop 은 Cooker를 이용하는 응용 클래스이다. 
class ChickenShop{
	private:
		string name_;
		Cooker *myCooker;
	public:
		ChickenShop(string sname, Cooker *ck)
		:name_(sname), myCooker(ck){  
		}
		void StartBusiness(){
			int n;
			while ( true ){
				cout << name_ << "입니다. 몇마리 주문하시겠습니까? (0이면 영업 종료)  ";
				cin >> n;
				if ( n == 0 ) break;
				myCooker->Cook(n);
			}
			cout << endl << "영업을 종료합니다." << endl;
		}
};

int main(){
	ChickenShop *shop1, *shop2;
	
	shop1 = new ChickenShop("튀튀 치킨", new FriedChickenMaker);
	shop1->StartBusiness();

	shop2 = new ChickenShop("용인 찜닭", new SteamedChickenMaker);
	shop2->StartBusiness();
}
