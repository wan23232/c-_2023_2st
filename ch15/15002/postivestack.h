#ifndef _POSTIVESTACK_H_
#define _POSTIVESTACK_H_
#include "mystack.h"
class PositiveStack :public Stack{
	// 공개 메소드
	public:	
		PositiveStack();  // 기본 생성자.
		void insert(int);
	// 상속할 함수 및 변수
	protected:
		

	// 멤버 변수 및 비공개 함수
	private:
		//void insert(int);
};
#endif
