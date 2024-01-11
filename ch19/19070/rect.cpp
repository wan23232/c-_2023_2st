#include <iostream>

class Rect {
	public:
		// 생성자
		Rect(int a,int b):width_(a),height_(b){}
		// 연산자
		void operator ++(int n){
			this->height_++;
		}
		void operator ++(){
			this->width_++;
		}
		int operator  *(){
			return this->width_ * this->height_;
		}
	private:
		int width_, height_;
};

using namespace std;
int main(){
	Rect r(2,8); // width 2, height 8
	r++;  // 높이를 증가
	cout << *r << endl;   // 면적을 출력
	++r;  // 너비를 증가
	cout << *r << endl;
}
