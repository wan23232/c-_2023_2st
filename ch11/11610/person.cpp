#include "person.h"
#include "book.h"
#include "catalog.h"
#include <iostream>
Person::Person(){
	// Default 생성자
}
Person::Person(std::string a,std::string b){
	name_=a;
	id_num_=b;
	book_=nullptr;
}
void Person::changeName(std::string a){
	name_=a;
}
void Person::getBook(Book *b){
	if(book_==nullptr){
		book_=b;
	}else{
	
		book_->addBook(b);
	}

}
std::string Person::getName(){
	return name_;
}
std::string Person::getId(){
	return id_num_;
}
void Person::getInformation(){
	Book *temp;
	temp=Person::book_;
	while(temp!=nullptr&&temp->getPerson()->getName()==name_){
		std::cout<<"도서 명: "<<temp->getName()<<std::endl<<"저자: "<<name_<<" "<<id_num_<<std::endl<<"도서 번호: "<<temp->getIsbn()<<std::endl<<std::endl;
		temp=temp->getNext();
	}

}
void Person::summary(){
	std::cout<<name_<<" "<<id_num_<<std::endl;
	getInformation();
}

