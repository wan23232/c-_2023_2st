#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "sms.h"
#include "logger.h"
using namespace std;


class SMSLogger:public MsgSender , public Logger  /* 다중 상속을 한다. */ {
	public:
		SMSLogger(std::string phone){
			// 전화번호를 저장 한다.
			phone_=phone;
		}
		// 가상 함수인 writeLog 함수를 구현해 주어야 한다.
		// Logger  클래스 정의를 참조.
		// writeLog 함수는 저장된 전화번호로 문자를 보낸다.
		// 문자 보내는 방법은 sms.h 를 참조.
		void writeLog(std::string s){
			send(phone_,s);
		}
	private:
		std::string phone_;
};


class App{
		Logger *mylogger;
	public:
		App(Logger *pl){  mylogger = pl ; }
		void start(){
			mylogger->writeLog( "oopa20 서정완 입니다.");
			// 홍길동 대신에 여러분의 계정번호 이름을 위에 넣으세요
		}
};

int main(){
	App *r1;
	
	r1 = new App(new SMSLogger("01085784321"));  // 조세형교수 전화번호임. 바꾸지 말것.
	r1->start();
}
