#ifndef _BOY_H
#define _BOY_H
#include <string>
class Girl;
class Boy{
	private:
		std::string name_;
		Girl * girl_friend_;
	
	public:
		Boy();
		Boy(std::string);
		void sayHello();
		std::string getName();
		void changeName(std::string);
		void setGirlFriend(Girl *);
	
};
#endif
