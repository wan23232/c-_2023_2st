#include "fruit.h"
#include <iostream>
using namespace std;
FruitThing::FruitThing(string name):name_(name){
	// Default 생성자
}
void FruitThing::Show(){
	cout << "(과일 입니다. 이름은 " << name_ << "입니다.)" << endl;
}
