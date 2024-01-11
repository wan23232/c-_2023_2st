#ifndef _MYSTRING_H_
#define _MYSTRING_H_
#include <cstring>
class MyString {
	// 공개 메소드
	public:	
		MyString();  // 기본 생성자.
		MyString(const char *);
		int length();
		void add(const char *);
		void add(MyString *);
		char * Getstr()const;
		void print();
		~MyString();

	// 멤버 변수 및 비공개 함수
	private:
		char * str_;

};
#endif
