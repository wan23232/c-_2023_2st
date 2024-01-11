#include "frame.h"
#include "button.h"
#include <iostream>
using namespace std;
Frame::Frame(string name)
    :Component(name)
{
    //name_ = name;
    subcomponents_ = new list<Component *>;
}

void Frame::Add(Component* r){
    subcomponents_->push_back(r);
}

void Frame::Show(){
    list<Component *>::iterator i;
    cout << "[ 프레임. 제목은: " << title_ << ". 부속 컴포넌트는: "  << endl;
    for (i=subcomponents_->begin(); i != subcomponents_->end();  i++){
        (*i)->Show();
    }
    cout << title_ << " 프레임 끝 ]" << endl;
}
