#include "member.h"
#include "girlgroup.h"
#include <iostream>
Member::Member(){
	// Default 생성자

}
Member::Member(std::string a){
	name_=a;
}
void Member::setGroup(GirlGroup *a){
	group_=a;
}
void Member::tellme(){
	std::cout<<name_<<std::endl<<"소속팀 "<<group_->getName()<<std::endl;
}
std::string Member::getName(){
	return name_;
}

