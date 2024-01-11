#include "member.h"
#include "girlgroup.h"
#include <iostream>
Member::Member(){
	// Default 생성자
}
Member::Member(std::string a,std::string b){
	name_=b;
	talent_=a;
}
void Member::tellme(){
	std::cout<<talent_<<" 담당 "<<name_<<"! 소속 그룹은 "<<group_->getName()<<" 입니다."<<std::endl;
}
std::string Member::getTalent(){
	return talent_;
}
std::string Member::getName(){
	return name_;
}
void Member::setGroup(Girlgroup *a){
	group_=a;
}


