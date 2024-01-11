#include <iostream>
using namespace std;
class Dragoon{
	public: 
		int ID_;   // 각 instance의 번호.  이것은 멤버 변수
		// static  변수 선언 선언	
		static int numInstances_;
	
		Dragoon(){
			//  여기서 번호를 정해준다.
			numInstances_++;
			ID_=numInstances_;
		}
		void show(){ 
			// Dragoon 총 X 개 중 1번입니다. 처럼 출력
			cout << "Dragoon 총 "<<Dragoon::numInstances_<<"개 중 "<<ID_<<"번 입니다."<<endl;

			
		}


};
int Dragoon::numInstances_=0;
// 클래스 변수는 여기서 0으로 초기화.

int main(){
	Dragoon *d1, *d2, *d3;

	d1 = new Dragoon;
	d2 = new Dragoon;
	d3 = new Dragoon;

	d2->show();  // 총 3 개 중 2번입니다. 출력
	d1->show();  // 총 3개 중 1번입니다. 출력
	d3->show();
}
