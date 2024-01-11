#include "dogschool.h"
#include "dog.h"
#include <string>
#include <iostream>
DogSchool::DogSchool(){
	// Default 생성자
}
DogSchool::DogSchool(std::string n){
	names_=n;
}

void DogSchool::registerDog(Dog *d){
	student_[numDogs]=d;
	d->setSchool(this);
	numDogs++;
}
void DogSchool::showDogs(){
	std::cout<<"여기는 "<<names_<<"입니다."<<std::endl<<"학생들을 소개합니다."<<std::endl;
	for(int i=0;i<numDogs;i++){
		student_[i]->getName();
	}
}
std::string DogSchool::getName(){
	return names_;
}
void DogSchool::setName(std::string n){
	names_=n;
}
void DogSchool::drop(Dog * d){
	int t=0;
	for(;student_[t]!=d;t++){
		//empty
	}
	student_[t]=nullptr;
	for(;t<numDogs-1;t++){
		Dog * temp;
		temp=student_[t];
		student_[t]=student_[t+1];
		student_[t+1]=temp;
	}
	numDogs--;
}
