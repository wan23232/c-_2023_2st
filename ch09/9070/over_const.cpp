#include <iostream>
using namespace std;
class Rect{
	public:
		Rect(){
			width_=1;height_=1;
		}
		Rect(int size){
			width_=size;height_=size;
		}
		Rect(int w,int h){
			width_=w;height_=h;
			
		}
		void show(){
			cout <<"너비 "<<this->width_<<", 높이 "<<this->height_<<"인 사각형입니다."<<endl;
		}
	private: 
		int width_, height_;
};

int main(){
	Rect *r1=new Rect();
	Rect *r2=new Rect(2);
	Rect *r3=new Rect(3,4);

	r1->show();   // "너비 3, 높이 4인 사각형입니다." 같은 형식으로 출력
	r2->show();
	r3->show();

	delete r1;
	delete r2;
	delete r3;

	return 0;
}
