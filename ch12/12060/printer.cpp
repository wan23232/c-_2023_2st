#include <iostream>
using namespace std;
class Printer {
    public:
        Printer print(string s){
            cout << s;
			return *this;
        }
        void printline(string s){
        	cout << s << "END" << endl;
        }
};
int main(){
    Printer p;
    p.print("hello");
    p.printline("world");

	p.print("apple").print(" ").printline("banana");

}

