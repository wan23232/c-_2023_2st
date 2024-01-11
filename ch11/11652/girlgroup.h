#ifndef _GIRLGROUP_H_
#define _GIRLGROUP_H_
#include <string>
class Member;
class GirlGroup {
	// 공개 메소드
	public:	
		GirlGroup();  // 기본 생성자.
		GirlGroup(std::string);
		void addMember(Member *);
		void tellme();
		void setName(std::string);
		std::string getName();
	

	// 멤버 변수 및 비공개 함수
	private:
		std::string name_;
		Member *member_;
		
};
#endif
