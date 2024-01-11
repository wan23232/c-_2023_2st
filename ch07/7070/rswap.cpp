#include <iostream>
using namespace std;
void rswap(int &a,int &b){
	int t;
	t=a;
	a=b;
	b=t;

}

int main(){
    int one, two;
    cin >> one >> two;
    cout << one << " " << two << endl;
    rswap(one, two);
    cout << one << " " << two << endl;
    return 0;
}
