#include <iostream>
using namespace std;
template <class T>
T maxi(T x, T y){
	if (x > y){
		return  x ;
	} else {
		return y;
	}
}

class Rect{
	private:
		int width_, height_;
	public:
		Rect(){}
		Rect(int w, int h):width_(w),height_(h){}
		// operator > 을 메소드로 정의한다.
		bool operator >(Rect &a){
			if(this->area() > a.area()){
				return true;
			}else{
				return false;
			}
		}
		//	앞의 것이 면적이 크면 true를 돌려주고, 아니면 false를.
		int area(){ return width_ * height_ ; }
		void show (){ cout << "사각형 "<< width_ << "X" << height_ << endl;
		}
};

// maxi 함수를 template로 만든다.

int main(){
	int i = maxi(33,44);
	cout << i << endl;
	
	Rect a(1,2), b(2,3);
	Rect c;
	c = maxi(a, b);
	c.show();
	c = maxi(b, a);
	c.show();
}
