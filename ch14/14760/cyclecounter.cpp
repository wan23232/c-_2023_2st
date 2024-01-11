#include "cyclecounter.h"
CycleCounter::CycleCounter(){
	// Default 생성자
}
CycleCounter::CycleCounter(int n):CycleMax_(n){
	Num_=0;
}
void CycleCounter::bump(){
	if(Num_==CycleMax_){
		Num_=0;

	}else{
		Counter::bump();


	}
}

