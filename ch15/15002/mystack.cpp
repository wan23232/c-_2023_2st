#include "mystack.h"
#include <iostream>
using namespace std;
Stack::Stack(){ first = 0; }
void Stack::insert(int x){
	node * temp;
	temp = new node(x, first);
	temp->next = first;
	first = temp;
}
int Stack::pop(){
	int retval;
	node * temp;
	if (first==0) return -1;
	retval = first->data;
	temp = first;
	first = first->next;
	delete temp;
	return retval;
}

void Stack::show(){
	node *temp;
	for (temp = first; temp; temp = temp->next )
		cout << temp->data << " --> ";
	cout << "END\n";
}
