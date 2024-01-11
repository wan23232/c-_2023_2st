#ifndef _DOG_H_
#define _DOG_H_
#include <string>
class DogSchool;
class Dog {
	// 공개 메소드
	public:	
		Dog();  // 기본 생성자.
		Dog(std::string);
		void setSchool(DogSchool *);
		void setName(std::string);
		void getName();
		void dropSchool();

	// 멤버 변수 및 비공개 함수
	private:
		std::string names_;
		DogSchool *school_;

};
#endif
