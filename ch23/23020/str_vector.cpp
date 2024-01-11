#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	vector<string> strings;
	string s;
	while(cin>>s){
		strings.push_back(s);
	}
	for(int i=strings.size()-1;i>=0;i--){
		cout<<strings.at(i)<<endl;
	}
	return 0;
}
