#include <iostream>
using namespace std;

class Dog{
	public:
		Dog();
		void Bark();
		
};
Dog::Dog(){
	std::cout << "Dog의 생성자가 호출되었습니다. \n" ;
}

void Dog::Bark(){ 
	cout << "멍멍" << endl; 
}
class NoisyDog:public Dog{
	public:
		void Bark();
};
void NoisyDog::Bark(){
	Dog::Bark();
	Dog::Bark();
	Dog::Bark();


}
int main(){
	
	NoisyDog nd;
	nd.Bark();
}
