#include <iostream>
using namespace std;

class INT {
    public:
        // 생성자 2개  필요.
        INT():data_(0){}
        INT(int n):data_(n){}
        int getValue(){ return data_ ; }
	// 여기에 ++ 연산 정의
		void operator ++ (){
			this->data_+=1;
		
		}
	
	private:
		int data_;
};

int main(){
	INT x(9);
	++x;
	cout << x.getValue() << endl;
}
