#include <iostream>
#include <cstring>
using namespace std;

struct Person {  
	char name[20]; 
	int id;
	void print(){
		cout<<this->name<<" "<<this->id<<endl;
	}
};


int main(){
	Person p, r;  

	strcpy(p.name, "정국");
	p.id=60231234;
    strcpy(r.name, "슈가");
    r.id=60235678;

	p.print();
	r.print();
	return 0;
}
