#include <iostream>
using namespace std;
#ifndef _PERSON_H
#define _PERSON_H
class Person{
	private:
		string name_;
		string numPer_;
	public:
		Person(string a,string b);
		void print();
	
};
#endif
