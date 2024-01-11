#include <iostream>
#include <list>
#include "point.h"
using namespace std;
int main(){
	list<Point> p;

	int x,y;
	while(cin>>x>>y){
		p.push_back(Point(x,y));
	}

	for(list<Point>::iterator i = p.begin();i!=p.end();i++){
		(*i).show();
	}
	
	for(list<Point>::reverse_iterator i = p.rbegin();i!=p.rend();i++){
		(*i).show();
	}
	 
	return 0;
}
