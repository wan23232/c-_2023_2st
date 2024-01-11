#include "boy.h"
#include "girl.h"
#include <iostream>

Boy::Boy(){
	//empty
}
Boy::Boy(std::string a){
	name_=a;
}
std::string Boy::getName(){
	return name_;
}
void Boy::sayHello(){
	std::cout<<"나는 "<<name_<<" 입니다. 내 여자친구는 "<<girl_friend_->getName()<<"입니다."<<std::endl;
}
void Boy::changeName(std::string a){
	name_=a;
}
void Boy::setGirlFriend(Girl * a){
	girl_friend_=a;
}

