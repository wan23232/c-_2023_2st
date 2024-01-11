#include "postivestack.h"
PositiveStack::PositiveStack(){
	// Default 생성자
	first=0;
}
void PositiveStack::insert(int x){
	if(x>=0){
		Stack::insert(x);
	}else{
		//empty
	}
}
