#ifndef _CATALOG_H_
#define _CATALOG_H_
#include <string>
class Book;
class Catalog {
	// 공개 메소드
	public:	
		Catalog();  // 기본 생성자.
		Catalog(std::string);
		void addBook(Book *);
		void summary();

	// 멤버 변수 및 비공개 함수
	private:
		std::string name_;
		Book * book_;
		int num_=0;


};
#endif
