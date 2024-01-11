#pragma once
#include <string>
// 인터페이스 역할을 하는 추상 클래스
class Logger{
	public:
		virtual void writeLog(std::string s)=0;
};
