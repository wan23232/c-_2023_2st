#include "book.h"
#include "person.h"
#include "catalog.h"
#include <iostream>
Book::Book(){
	// Default 생성자
	next_=nullptr;
}	
Book::Book(Person * a,std::string b,std::string c){
	person_=a;
	isbn_=b;
	name_=c;
	person_->getBook(this);
	next_=nullptr;

}
Book::Book(Person * a,std::string b){
	person_=a;
	isbn_=b;
	name_="제목 미정";
	person_->getBook(this);
	next_=nullptr;

}
void Book::addBook(Book * b){
	Book * temp;
	temp=this;
	while(temp->next_!=nullptr){
		temp=temp->next_;
	}
	temp->next_=b;
	b->next_=nullptr;
}

std::string Book::getName(){
	return name_;
}
std::string Book::getIsbn(){
	return isbn_;
}
void Book::getInformation(){
	std::cout<<"도서 명: "<<name_<<std::endl<<"저자: "<<person_->getName()<<" "<<person_->getId()<<std::endl<<"도서 번호: "<<isbn_<<std::endl<<std::endl;

}	
Person * Book::getPerson(){
	return person_;
}
Book * Book::getNext(){
	return next_;
}

