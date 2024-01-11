#include "boy.h"
#include "girl.h"
#include <iostream>

Girl::Girl(){
	//empty
}
Girl::Girl(std::string a){
	name_=a;
}
std::string Girl::getName(){
	return name_;
}
void Girl::sayHello(){
	std::cout<<"나는 "<<name_<<" 입니다. 내 남자친구는 "<<boy_friend_->getName()<<"입니다."<<std::endl;
}
void Girl::changeName(std::string a){
	name_=a;
}
void Girl::setBoyFriend(Boy *a){
	boy_friend_=a;
}

