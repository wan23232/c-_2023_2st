#ifndef _DOGSCHOOL_H_
#define _DOGSCHOOL_H_
#include <string>
class Dog;
class DogSchool {
	// 공개 메소드
	public:	
		DogSchool();  // 기본 생성자.
		DogSchool(std::string);
		void registerDog(Dog *);
		void showDogs();
		std::string getName();
		void setName(std::string);
		void drop(Dog *);

	// 멤버 변수 및 비공개 함수
	private:
		Dog * student_[100];
		int numDogs = 0;
		std::string names_;


};
#endif
