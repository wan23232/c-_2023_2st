#include "person.h"

Person::Person(string a,string b){
	name_=a;
	numPer_=b;
}
void Person::print(){
	cout << "저자 : "<<name_<<" "<<numPer_<<endl;
}
