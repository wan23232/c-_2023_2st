#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
// 여기에 Random 클래스를 작성한다.
class Random{
	private:
		int min_;
		int max_;
	public:
		Random(int a,int b){
			min_=a;
			max_=b;
			srandom(time(NULL));
		}
		int get(){
		
			return random()%(max_-min_+1)+min_;
		}

};


int main(){
	Random ran(5,15); // 5~15사이(5, 15포함)의 난수를 발생하는 난수 발생기
	
	for (int i=0; i<20; i++){
	   cout << ran.get() << " " ;
	}
	cout << endl;
	return 0;
}
