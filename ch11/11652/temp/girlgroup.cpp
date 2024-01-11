#include "girlgroup.h"
#include "member.h"
#include <iostream>
GirlGroup::GirlGroup(){
	// Default 생성자
}
GirlGroup::GirlGroup(std::string a){
	name_=a;
}
void GirlGroup::addMember(Member * a){
	member_[num_]=a;
	member_[num_]->setGroup(this);
	num_++;
}
void GirlGroup::tellme(){
	std::cout<<name_<<std::endl;
	for(int i=0;i<num_;i++){
		std::cout<<member_[i]->getName()<<" ";
	}
	std::cout<<std::endl<<std::endl;
}
void GirlGroup::setName(std::string a){
	name_=a;
}
std::string GirlGroup::getName(){
	return name_;
}


