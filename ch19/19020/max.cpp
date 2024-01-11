#include <iostream>
using namespace std;

int max(int a,int b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}

int max(int a,int b,int c){
	int temp = max(a,b);
	return max(temp,c);
}



int main(){
    int x, y, z;
    while ( cin >> x >> y >> z ){
        cout << max(x, y, z) << endl;
    }
    return 0;
}
