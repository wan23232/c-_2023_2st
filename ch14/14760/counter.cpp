#include "counter.h"
#include <iostream>
Counter::Counter(){
	// Default 생성자
	Num_=0;

}
void Counter::show(){
	std::cout<<Num_<<" ";
}
void Counter::bump(){
	Num_++;
}

