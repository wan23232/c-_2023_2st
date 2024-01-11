#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	string temp;
	while(cin >>temp){
		s=temp+s;
	}
	cout << s << endl;

}
