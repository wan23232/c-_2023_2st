#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "sms.h"
using namespace std;

class Logger{
	public:
		virtual void writeLog(std::string s)=0;
};


class SMSLogger:public Logger{  // 인터페이스 단일 상속
	public:
		SMSLogger( std::string phone ){
			msgptr_=new MsgSender();
			phone_=phone;
		}
		//  writeLog 함수를 구현
		void writeLog(string s){
			msgptr_->send(phone_,s);
		}
	private:
		string phone_;
		// Object adapter이므로 MsgSender의 instance가 필요.
		MsgSender *msgptr_;
};


class App{
		Logger *mylogger;
	public:
		App(Logger *pl){  mylogger = pl ; }
		void start(){
			mylogger->writeLog("oopa20 서정완  Object Adapter.");
			// 홍길동 대신에 여러분의 계정번호 이름을 여기에 넣으세요
		}
};

int main(){
	App *r1;
	
	r1 = new App(new SMSLogger("01085784321"));
	r1->start();
}
