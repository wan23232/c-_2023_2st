#include "catalog.h"
#include "book.h"
#include "person.h"
#include <iostream>
Catalog::Catalog(){
	// Default 생성자
	book_=nullptr;
}	
Catalog::Catalog(std::string a){
	name_=a;
	book_=nullptr;
}
void Catalog::addBook(Book *b){
	if(book_==nullptr){
		book_=b;
		num_++;
	}else{	
		book_->addBook(b);
		num_++;
	}
	
}
void Catalog::summary(){
	Book *temp;
	temp=book_;
	std::cout<<"카탈로그 이름: "<<name_<<std::endl<<"총 "<<num_<<"권의 책이 있습니다."<<std::endl;
	while(temp!=nullptr){
		temp->getInformation();
		temp=temp->getNext();
	}
	
}

