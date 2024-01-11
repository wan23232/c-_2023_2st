#ifndef _SONG_H
#define _SONG_H
#include <string>
class Song{
	public:
		Song(std::string a,std::string b);
		void show();
		std::string getSinger();
		std::string getTitle();
	private:	
		std::string singer_;
		std::string title_;
};
#endif
