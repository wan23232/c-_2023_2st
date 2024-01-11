#include <iostream>
using namespace std;
struct Counter{
	int num;
	int set;
	void tick(int &p){
		p++;
	}
	void rest(int &p){
		p=0;
	}
	void display(int p){
		cout<<p<<" ";
	}
};

int main(){
	Counter t;
	while(cin>>t.set){
		if(t.set==0){
			t.rest(t.num);
			t.display(t.num);
		}else if(t.set==1){
			t.tick(t.num);
			t.display(t.num);
		}else{
			cout<<"END"<<endl;
			break;
		}
	}
	return 0;

}

