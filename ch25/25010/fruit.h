#pragma once

#include <iostream>
using namespace std;
class Fruit {
	// 공개 메소드
	public:	
		Fruit(string);  // 기본 생성자.
		virtual void Show();
		// 상속할 함수 및 변수
	protected:
		string name_;

		// 멤버 변수 및 비공개 함수
	private:
};

