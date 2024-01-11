#include "girlgroup.h"
#include "member.h"
#include <iostream>
Girlgroup::Girlgroup(){
	for(int i=0;i<10;i++){
		mem[i]=nullptr;
	}
}
Girlgroup::Girlgroup(std::string a){
	name_=a;
}
	
void Girlgroup::tellme(){
	std::cout<<name_<<std::endl<<"총원 "<<num_<<"명"<<std::endl;
	for(int i=0;i<num_;i++){
		std::cout<<mem[i]->getTalent()<<" "<<mem[i]->getName()<<std::endl;
	}
}
	
void Girlgroup::addMember(Member *a){
	mem[num_]=a;
	mem[num_]->setGroup(this);
	num_++;
}

void Girlgroup::setName(std::string a){
	name_=a;
}
std::string Girlgroup::getName(){
	return name_;
}


