#include "mystring.h"
#include <iostream>
MyString::MyString(){
	// Default 생성자
	str_=(char *)malloc(sizeof(char));
	str_[0]='\0';
}
MyString::MyString(const char *p){
	str_=(char *)malloc(strlen(p)+1);
	strcpy(str_,p);

}
int MyString::length(){
	return strlen(str_);

}
void MyString::add(const char *p){	//char * 즉 스트링을 받는 경우
	char * temp;
	temp=(char *)malloc(strlen(str_)+strlen(p)+1);
	strcat(temp,str_);
	free(str_);
	strcat(temp,p);
	str_=temp;	
}	
void MyString::add(MyString *p){	//mystring 객체를 파라메터로 받는 경우
	add(p->Getstr());
}
char * MyString::Getstr()const{
	return str_;
}


void MyString::print(){
	std::cout<<str_<<std::endl;

}
MyString::~MyString(){
	free(str_);
}
