#include <iostream>
#include <string>
using namespace std;
int array[5];

// 함수 farray를 만들어야 한다.
int &farray(int i){

	string s="배열 범위 초과";
	if(i>=5) throw s;
	return array[i];
}
int main(){
	// exception을 받을 수 있도록 수정한다.
	for (int i=0; i<5; i++){
		farray(i) = i*2;   // 배열 array의 값이 수정된다.
	}
	for (int i=0; i<6; i++){
		// 마지막에 i=5 인 경우는 예외가 발생해야한다.
		try{
			cout << farray(i) << endl;
		}catch(string p){
			cout << p << endl;
		}
	}
}
