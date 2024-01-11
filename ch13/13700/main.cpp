#include "mystring.h"
#include <iostream>
using namespace std;
void Show(MyString s){
    cout << "전역 함수에서: " << s.c_str() << endl;
    // c_str은 실제 스트링을 가리키는 char * 를 돌려주는 함수
}

int main(){
    MyString s1("Helloworld");

    Show(s1);
    s1.Show();
}
