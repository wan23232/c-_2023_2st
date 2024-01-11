#include <iostream>
#include <unistd.h>
using namespace std;
class KyoChon{
	public:
		void CookChicken(){
			int n;
			cout << "닭을 기름에 넣는다.\n";
			for (n=5; n>=1; n--){
				cout << "닭을 " << n << "분간 더 튀깁니다.\n";
			}
			cout << "닭이 다 익었습니다." << endl;
		}
};

// Padak 클래스를 여기에 정의한다.
class Padak{
	public:
		Padak(){
			KC_=new KyoChon;
		}
		~Padak(){
			delete KC_;
		}
		void CookChicken(){
			KC_->CookChicken();
			cout<<"파를 100그램 얹습니다."<<endl;
		}
	private:
		KyoChon * KC_;
};

int main(){
	Padak p1;
	p1.CookChicken();
}
