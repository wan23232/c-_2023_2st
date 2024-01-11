#ifndef _GIRLGROUP_H_
#define _GIRLGROUP_H_
#include <string>
class Member;
class Girlgroup {
	// 공개 메소드
	public:	
		Girlgroup();  // 기본 생성자.
		Girlgroup(std::string);
		void tellme();
		void addMember(Member *);
		void setName(std::string);
		std::string getName();



	// 멤버 변수 및 비공개 함수
	private:
		std::string name_;
		Member *mem[10];
		int num_=0;

};
#endif
