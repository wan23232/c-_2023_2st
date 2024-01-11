#include <iostream>

class Rect {
	public:
		// 생성자 정의
		Rect(int a,int b):width_(a),height_(b){}
		// 연산자 *, ~, !  정의
		int operator *(){
			return this->width_ * this->height_;
		}
		int operator ~(){
			return this->width_;
		}
		int operator !(){
			return this->height_;
		}
	private:
		int width_, height_;
};
using namespace std;
int main(){
	Rect r(2,3);  // width 2, height 3
	cout << "높이는 " << !r << endl;
	cout << "폭은 " << ~r << endl;
	cout << "면적은 " << *r << endl;
}
