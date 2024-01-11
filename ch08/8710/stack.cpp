
#include <iostream>
using namespace std;

class Item{
	public:
		int data_;
		Item * next_;
		Item(int data, Item * next){
			data_=data;
			next_=next;
			
		}
};
class Stack{
	public:
		Item * first_;
		Stack(){
			first_=nullptr;
		}
		void insert(int n){
			Item * t;
			t=new Item(n,first_);
			first_=t;
			
		}
		int top(){
			return this->first_->data_;
			
		}
		void pop(){
			Item *t;
			t=first_;
			first_=first_->next_;
			delete t;
			
		}
		bool isEmpty(){
			// 이제는 0 1 대신 false true 로 쓴다.
			if(first_==0){
				return true;
			}else{
				return false;

			}
		}
		void debugPrint(){
			// 디버깅 용으로 들어있는 정수들을 전부 출력한다.
			Item *t;
			for(t=first_;t!=nullptr;t=t->next_){
				cout << t->data_ << endl;
			}
		}
};
int main(){
	Stack s;  int num;
	
	while ( cin >> num ){
	    s.insert(num);
	}
	
	s.debugPrint(); // 테스트 출력
	// 이제 하나씩 빼자.
	
	while ( ! s.isEmpty() ){
	    cout << s.top() << endl;
	    s.pop();
	}
	

	return 0;
}
