#include <iostream>
#include <unistd.h>
#include <thread>
using namespace std;
void apple_robot(){
	for(int i=0;i<10;i++){
		usleep(100000);
		cout<<"Apple"<<endl;
	}
}
void banana_robot(){
	for(int i=0;i<5;i++){
		usleep(200000);
		cout<<"Banana"<<endl;
	}
}
int main(){
	thread applethread(apple_robot);
	thread bananathread(banana_robot);
	applethread.join();
	bananathread.join();
	cout<<"끝"<<endl;

	return 0;
}
