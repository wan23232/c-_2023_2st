#ifndef _MEMBER_H_
#define _MEMBER_H_
#include <string>
class GirlGroup;
class Member {
	// 공개 메소드
	public:	
		Member();  // 기본 생성자.
		Member(std::string);
		void setGroup(GirlGroup *);
		void tellme();
		std::string getName();

	// 멤버 변수 및 비공개 함수
	private:
		std::string name_;
		GirlGroup *group_;

};
#endif
