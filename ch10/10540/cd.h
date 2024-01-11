#ifndef _CD_H
#define _CD_H
#include <string>
#include "song.h"
class CD{
	public:
		CD(std::string title);
		void addSong(Song *);
		Song * getSong(int index);
		int getNumSong();
		std::string getCDtitle();
	private:
		std::string title_;
		Song * sptr_[20];
		int numSong=0;
};
#endif
