#pragma once
#include "listener.h"
class Button;
class Frame:public ActionListener{
	public:
		Frame();
		void addOne();
		void show();
		void start();
		void actionPerformed()override;
	protected:
		Button *button_;
	
		int data=0;
};

