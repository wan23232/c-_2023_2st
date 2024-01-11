// 다음의 예제에서  다형성이 이루어지도록 수정을 해보라.
// main에서의 정적 변수는 전부 포인터를 이용한 동적 할당으로 바꾸고 이에 따른 변경을 한다.
// 최종 output은 "나는 동물" 과 "나는 개"가 출력되어야 한다.
#include <iostream>
using namespace std;
class Animal {
	public:
		Animal(){}
		virtual void sing(){ cout << "나는 동물. \n" ; }
	private:
};

class Dog: public Animal {
	public:
		Dog(){}
		void sing(){ cout << "나는 개. \n" ; }
	private:
};
class Cat: public Animal {
	public:
		Cat(){}
		void sing(){ cout << "나는 고양이. \n" ; }
	private:
};


int main(){
	Animal *a=new Animal();
	Dog *d=new Dog();
	Cat *c=new Cat();

	a->sing();
	a = d;
	a->sing();
	a=c;
	a->sing();
}
