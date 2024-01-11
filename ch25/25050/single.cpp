#include <iostream>
using namespace std;

class Single{
    public:
		void show(){ cout << value_ << endl; }
		static Single * getSingle(int n){
			static Single * inst_=0;
			if(inst_==0){
				inst_=new Single(n);
				return inst_;
			}
		}
    private:
		Single(int n):value_(n){ }
        int value_ ;
};


int main(){
    Single * ps1 =  Single::getSingle(333);   // Single::getSingle() 처럼 바꿔야한다.
    Single * ps2 = Single::getSingle(444);   // 444 값은 무시하고 기존 포인터를 돌려준다.
    
    ps1->show();
    ps2->show();

    cout << "Addresses are: " << ps1 << ", " <<  ps2 << endl;
}
