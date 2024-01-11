#ifndef _BOOK_H_
#define _BOOK_H_
#include <string>
class Person;
class Book {
	// 공개 메소드
	public:	
		Book();  // 기본 생성자.
		Book(Person *,std::string,std::string);
		Book(Person *,std::string);
		std::string getName();
		std::string getIsbn();
		void getInformation();
		void addBook(Book *);
		Person * getPerson();
		Book * getNext();
			
	
	// 멤버 변수 및 비공개 함수
	private:
		std::string isbn_;
		std::string name_;
		Person * person_;
		Book * next_;
};
#endif
