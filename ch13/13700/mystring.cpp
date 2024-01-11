#include "mystring.h"
#include <iostream>
#include <string.h>
MyString::MyString(){
	// Default 생성자
}
MyString::MyString(const char *s){
	data_=strdup(s);
}
MyString::MyString(const MyString &m){
	data_=strdup(m.data_);
}
char * MyString::c_str(){
	return data_;
}
void MyString::Show(){
	std::cout<<data_<<std::endl;
}
MyString::~MyString(){
	free(data_);
}

