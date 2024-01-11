#include "checkbox.h"
#include <iostream>
using namespace std;
CheckBox::CheckBox(string name):Component(name){
    //
}
void CheckBox::Show(){
    cout << "( 체크박스. 제목은 " << title_ << ".)" << endl;
}
