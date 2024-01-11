#ifndef _CDP_H
#define _CDP_H
#include "cd.h"
class CDPlayer{
	public:
		CDPlayer();
		void insertCD(CD *);
		void play();
		void showStatus();
		void nextTrack();
		void prevTrack();
		void ejectCD();
		
	private:
		CD * cd_;
		int num_=0;
		
};
#endif
