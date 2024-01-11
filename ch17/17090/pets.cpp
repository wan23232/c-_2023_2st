#include <iostream>
using namespace std;
class Animal{
	public:
		virtual void speak(){
			cout << "Animal" << endl;
		}
};
class Dog:public Animal{
	public:
		void speak() override{
			cout << "멍멍" << endl;
		}
};
class Cat:public Animal{
	public:
		void speak() override{
			cout << "야옹" << endl;
		}
};
int main(){
	Animal * animal[5];
	animal[0]=new Dog();
	animal[1]=new Cat();
	animal[2]=new Dog();
	animal[3]=new Cat();
	animal[4]=new Dog();
	
	for (int i=0; i<5; i++){
		animal[i]->speak();
	}
}
