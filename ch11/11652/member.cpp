#include "member.h"
#include "girlgroup.h"
#include <iostream>
Member::Member(){
	// Default 생성자
	next=nullptr;

}
Member::Member(std::string a){
	name_=a;
	next=nullptr;
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
void Member::addmember(Member *a){
	Member *temp=this;
	while(temp->next!=nullptr){
		temp=temp->next;
	}
	temp->next=a;
	a->next=nullptr;
}	
Member * Member::getNext(){
	return next;
}

