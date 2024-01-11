#include <iostream>
using namespace std;
class AnimalSchool{
	public:
	
		virtual void speak()=0;
		virtual void sayName()=0;
	



	protected:


	private:
		
};
class Cat:public AnimalSchool{
	public:
		Cat(const char *name):name_(name){
			//

		}
		void speak()override{
			cout << "야옹! ";
			sayName();
		}
		void sayName()override{
			cout << "내이름은 " << name_ << "입니다.\n";
		}
	private:
		string name_;
};
class Dog:public AnimalSchool{
	public:
		Dog(const char *name):name_(name){
			//
		}
		void speak()override{
			cout << "멍멍! " ;
			sayName();
		}
		void sayName()override{
			cout << "내이름은 " << name_ << "입니다.\n";
		}
	private:	
		string name_;

};


int main(){
	AnimalSchool *s[4]; 
	s[0]=(new Cat("Kitty"));
	s[1]=(new Cat("야옹이"));
	s[2]=(new Dog("바둑이"));
	s[3]=(new Dog("돌돌이"));
	for(int i=0;i<4;i++){
		s[i]->speak();
	}
	return 0;
}
