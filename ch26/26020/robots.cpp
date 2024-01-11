#include <iostream>
#include <unistd.h>
#include <thread>
using namespace std;
class Robot{
    public:
        Robot(string name) :name_(name){
        }
        // () 연산자를 override하여 run 을 호출하게 한다.
		void operator () (){
			run();
		}
        
        
        
        void run(){
            for (auto i=1; i<=10; i++){
                usleep(100000);
                cout <<  name_ << " walks "
                     << i << " steps" << endl;
            }
        }
    protected:
        string name_;
};
int main(){
	Robot r2d2("R2D2");
	Robot u3po("U-3PO");
	thread r2d2_thread(r2d2);
	thread u3po_thread(u3po);
	r2d2_thread.join();
	u3po_thread.join();
	cout<<"끝"<<endl;
	return 0;
}
