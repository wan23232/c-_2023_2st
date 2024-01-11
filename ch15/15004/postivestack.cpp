#include "postivestack.h"
PositiveStack::PositiveStack(){
	// Default 생성자
	P_st_=new Stack();
}
void PositiveStack::insert(int x){
	if(x>=0){
		P_st_->insert(x);
	}else{
		//empty
	}
}
void PositiveStack::show(){
	P_st_->show();
}
