#include <iostream>
using namespace std;
class Rect{
	public:
		int width_;
		int height_;
		Rect(int a,int b){
			width_=a;
			height_=b;
		}
		static Rect * getRect(){
			int w,h;
			if(cin>>w && cin>>h){
				return new Rect(w,h);
			}else{
				return nullptr;
			}
		}
		void show(){
			cout<<width_<<"x"<<height_<<" 사각형 입니다."<<endl;
		}

};
int main(){
	Rect *r;
	r=Rect::getRect();
	r->show();
	return 0;
}
