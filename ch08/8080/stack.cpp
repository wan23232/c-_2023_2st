#include <iostream>
#define MAXSTACK 1000
using namespace std;
class Stack{
	public:
		int Stack_[MAXSTACK];
		int sp_;
		Stack(){sp_=0;}
		void push(int a){
			if(sp_ < MAXSTACK){
				Stack_[sp_]=a;
				sp_++;
			}
		}
		int isEmpty(){
			if(sp_==0){
				return 1;
			}else{
				return 0;
			}
		}
		int top(){
			return Stack_[sp_-1];
		}
		void pop(){
			if(!isEmpty()){
				sp_--;
			}
		}

};
int main(){
	Stack mystack;
	// mystack.init();   // 생성자를 배운 경우 생성자에서 초기화한다.
	int num;

	while ( cin >> num ){
		mystack.push(num); 
	}
	while (!mystack.isEmpty()) {
	   cout  << mystack.top()<< " --> ";
	   mystack.pop();
	}
	cout << "END\n";
}

