#include "button.h"
#include <iostream>
using namespace std;
Button::Button(string name):Component(name){
    //
}
void Button::Show(){
    cout << "( 버튼. 제목은 " << title_ << ".)" << endl;
}
