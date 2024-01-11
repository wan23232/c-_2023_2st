#include <iostream>
#include <string>
//using namespace std;
class MyStream{
	public:
		MyStream(){
			//empty
		}
		void operator <<(std::ostream &b,int a){
			printf("%d ",a);
		}
		void operator <<(std::ostream &b,const char *a){
			printf("%s ",a);
		}
		void operator <<(std::ostream &b,double a){
			printf("%lf ",a);
		}

};
int main(){
    MyStream mycout;
    mycout << 99 ;
    mycout << "Hello world";
    mycout << 3.14 ;

	return 0;
}
