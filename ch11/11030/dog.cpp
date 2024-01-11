#include "dog.h"
#include "dogschool.h"
#include <iostream>
Dog::Dog(){
	// Default 생성자
}

Dog::Dog(std::string n){
	names_=n;
	school_=nullptr;
}

void Dog::setSchool(DogSchool * s){
	school_=s;
}
void Dog::setName(std::string n){
	names_=n;
}
void Dog::getName(){
	std::cout<<"멍멍, 나는 "<<names_<<"입니다. "<<school_->getName()<<"에 다닙니다."<<std::endl;
}
void Dog::dropSchool(){
	if(school_!=nullptr){
		school_->drop(this);
		school_=nullptr;
	}
}
