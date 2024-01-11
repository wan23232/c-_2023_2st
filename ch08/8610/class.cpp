#include <iostream>
using namespace std;
class Complex{	
	private:
		double RealNum_;
		double ImagNum_;
	public:
		Complex(){
			//empty
		}
		Complex(double a, double b){
			RealNum_=a;
			ImagNum_=b;
		}
		void setValue(double a,double b){
			RealNum_=a;
			ImagNum_=b;
		}
		double Getreal(){
			return RealNum_;
		}
		double Getimag(){
			return ImagNum_;
		}
		Complex& addTo(Complex a){
			*this=Complex(this->Getreal()+a.Getreal(),this->Getimag()+a.Getimag());
			return *this;
		}
		void print(){
			if(ImagNum_>0){
				cout<<RealNum_<<" + "<<ImagNum_<<"i";
			}else{
				cout<<RealNum_<<" "<<ImagNum_<<"i";

			}
		}

};
Complex add(Complex a,Complex b){
	return Complex(a.Getreal()+b.Getreal(),a.Getimag()+b.Getimag());
}
Complex sub(Complex a,Complex b){
	return Complex(a.Getreal()-b.Getreal(),a.Getimag()-b.Getimag());
}
int main (){
	Complex a,b,c,d;
	a.setValue(1.1,2.2);
	b.setValue(2.2,3.3);
	c=add(a,b);
	a.addTo(b);
	d=sub(a,b);
	cout << "a = " ;
	a.print();   		    
	cout <<endl<< "c = " ;
	c.print();
	cout <<endl<< "d = ";  					   
	d.print(); 
	cout <<endl;

	a.addTo(a).addTo(b).addTo(c);
	cout << "a = ";
	a.print();
	cout <<endl;
	
	return 0;
}
