#pragma once
#include <iostream>
class Component{
	public:
	 	Component(std::string);
        virtual void Show();
	protected:
		std::string title_;
		

};
