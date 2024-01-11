#include <iostream>
using namespace std;
class Ptr{
	public:
		int data_;
		Ptr *next_;
		Ptr(){
			next_=nullptr;
		}
		Ptr(int a, Ptr * b){
			data_=a;
			next_=b;
		}
};
class OrderedList{
	public:
		Ptr * first_;
		OrderedList(){
			first_=nullptr;
		}

		void add(int a){
			Ptr * t;
			t=new Ptr();
			t->data_=a;	
			if(first_== nullptr){//first_가 아무것도 가리키지 않을 경우
				first_=t;
			}else if(first_->data_ > t->data_){//맨앞의 값보다 a값이 작은 경우
				t->next_=first_;
				first_=t;
			}else{
				Ptr *temp;
				temp=first_;
				while(temp->next_!=nullptr&& temp->next_->data_ < t->data_){
					temp=temp->next_;
				}
				t->next_=temp->next_; //temp->next_->data_가 t->data_보다 큰 경우 
				temp->next_=t;
			}
		}
		void print(){
			Ptr * t_;
			t_=first_;
			while(t_!=nullptr){
				cout<<t_->data_<<" ";
				t_=t_->next_;
			}

		}


};
int main(){
	OrderedList myList;

	int n;
	while ( cin >> n ){
		myList.add(n);
	}

	myList.print();  // 순서대로 출력한다. 항목간에는 줄바꿈으로 구분.
	return 0;
}
