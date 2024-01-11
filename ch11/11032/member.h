#ifndef _MEMBER_H_
#define _MEMBER_H
#include <string>
class Girlgroup;
class Member {
	// 공개 메소드
	public:	
		Member();  // 기본 생성자.
		Member(std::string,std::string);
		void tellme();
		std::string getTalent();
		std::string getName();
		void setGroup(Girlgroup *);

	

	// 멤버 변수 및 비공개 함수
	private:
		std::string talent_;
		std::string name_;
		Girlgroup * group_;

};
#endif
