#ifndef _MYSTACK_H_
#define _MYSTACK_H_
#include <iostream>
class Stack{
public:
	class node{
	public:
		int data;
		node * next;
		node(int x, node *nxt):data(x), next(nxt){}
	};
	Stack(); void insert(int); int pop();
	void show();
protected:
	node *first;
};
#endif

