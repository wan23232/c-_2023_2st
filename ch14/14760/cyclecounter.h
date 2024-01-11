#ifndef _CYCLECOUNTER_H_
#define _CYCLECOUNTER_H_
#include "counter.h"
class CycleCounter :public Counter{
	// 공개 메소드
	public:	
		CycleCounter();  // 기본 생성자.
		CycleCounter(int n);
		void bump();

	// 상속할 함수 및 변수
	protected:

	// 멤버 변수 및 비공개 함수
	private:
		int CycleMax_;
	
};
#endif
