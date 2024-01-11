#include "frame.h"
#include "button.h"
#include "listener.h"
#include <iostream>
using namespace std;
Frame::Frame(){
	button_ = new Button();
	
}
void Frame::actionPerformed(){
	addOne();
}

void Frame::addOne(){
	data++;
}
void Frame::show(){
	cout << "data = " << data << endl;
}
void Frame::start(){
	button_->addActionListener(this);
	button_->mouseClick();
	button_->mouseClick();
	button_->mouseClick();
}
