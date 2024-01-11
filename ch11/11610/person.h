#ifndef _PERSON_H_
#define _PERSON_H_
#include <string>
class Book;
class Person {
	// 공개 메소드
	public:	
		Person();  // 기본 생성자.
		Person(std::string,std::string);
		void changeName(std::string);
		void getBook(Book *);
		void getInformation();
		void summary();
		std::string getName();
		std::string getId();

	// 멤버 변수 및 비공개 함수
	private:
		std::string name_;
		std::string id_num_;
		Book *book_;
		int num_=0;

};
#endif
