#include <iostream>
#include <cstring>
using namespace std;

struct Person {  
	char name[20]; 
	int id;
	void print(Person *p){
		cout<<p->name<<" "<<p->id<<endl;
	}
};


int main(){
	Person p, r;  

	strcpy(p.name, "정국");
	p.id=60231234;
    strcpy(r.name, "슈가");
    r.id=60235678;

	p.print(&p);
	r.print(&r);
	return 0;
}
