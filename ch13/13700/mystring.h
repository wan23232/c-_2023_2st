#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class MyString {
	// 공개 메소드
	public:	
		MyString();  // 기본 생성자.
		MyString(const char *);
		MyString(const MyString &);
		char * c_str();
		void Show();
		~MyString();
		

	// 멤버 변수 및 비공개 함수
	private:
		char * data_;

};
#endif
