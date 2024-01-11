#pragma once
#include <string>
class MsgSender{
	protected:

	public:
		// 생성자
		MsgSender();

		// 메시지를 보내는 함수. 어떻게 보내는지는 알 필요 없다.
		// 주어진 전화 번호로 주어진 메시지를 보낸다.
		void send(std::string phone, std::string message);
};

