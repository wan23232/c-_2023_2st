#include <iostream>
using namespace std;

class Rect{
public:
	int width_; // 가로
	int height_; // 세로
	void setSize(int w, int h){
		width_ = w; height_ = h;
	}
	void show(){
		cout << "가로 " << width_ << ", 세로 " << height_ << " 사각형.\n";
	}
};
int main(){
	Rect * arr[5];

	// 포인터 배열 선언
	for(int i=0;i<5;i++){
		int width;
		int height;
		cin>>width>>height;
		arr[i]=new Rect();
		arr[i]->setSize(width,height);
		
	}
	// 5개의 객체를 생성, 크기 설정
	for(int i=4;i>=0;i--){
		arr[i]->show();
	}
	// 마지막 객체부터 show 로 출력
	for(int i=0;i<5;i++){
		delete arr[i];
	}
	return 0;
}
