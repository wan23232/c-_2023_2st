#include "girlgroup.h"
#include "member.h"
#include <iostream>
GirlGroup::GirlGroup(){
	// Default 생성자
	member_=nullptr;
}
GirlGroup::GirlGroup(std::string a){
	name_=a;
	member_=nullptr;
}
void GirlGroup::addMember(Member * a){
	if(member_==nullptr){
		member_=a;
	}else{
		member_->addmember(a);

	}
			
	}
void GirlGroup::tellme(){
	std::cout<<name_<<std::endl;
	Member * temp=member_;
	while(temp!=nullptr){
		std::cout<<temp->getName()<<" ";
		temp=temp->getNext();
	}
	std::cout<<std::endl<<std::endl;
}
void GirlGroup::setName(std::string a){
	name_=a;
}
std::string GirlGroup::getName(){
	return name_;
}


