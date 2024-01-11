#ifndef _SMS_H
#define _SMS_H
#include <iostream>
using namespace std;
class MsgSender{
	protected:

	public:
		// 생성자에서 메시지를 받을 전화번호를 설정한다.
		MsgSender();

		// 메시지를 보내는 함수
		void send(std::string phone, std::string message);
};
#endif
