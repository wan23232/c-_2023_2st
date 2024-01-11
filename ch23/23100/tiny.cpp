#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class TinyNumberPrinter{
	public:
		void operator () (double v){
			if(v<1){
				cout<<v<<endl;
			}
		}
	
};

int main(){
	vector<double> vec;
	double num;
	while ( cin >> num ){
	   vec.push_back(num);
	}
	
	// TyniNumberPrinter 를 이용하여 1미만의 수를 출력
	TinyNumberPrinter TP;

	for_each(vec.begin(),vec.end(),TP);

}
