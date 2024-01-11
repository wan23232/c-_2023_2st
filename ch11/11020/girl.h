#ifndef _GIRL_H
#define _GIRL_H
#include <string>
class Boy;
class Girl{
	private:
		std::string name_;
		Boy * boy_friend_;
	
	public:
		Girl();
		Girl(std::string);
		void sayHello();
		std::string getName();
		void changeName(std::string);
		void setBoyFriend(Boy *);
	
};

#endif
