#include "frame.h"
#include "button.h"
#include "checkbox.h"
#include <iostream>
using namespace std;
int main(){
    // 아래 4줄은 처음에 한번 실행해보고 코멘트 처리한다.
  //  Frame * frame1 = new Frame ("뚱뚱이");
   // frame1->Add(new Button("사각형"));
   // frame1->Add(new Button("타원"));
   // frame1->Show();

    // 아래는 제출할 프로그램에서 사용할 main 함수 내용이다.
    Frame * frame1 = new Frame ("뚱뚱이");
    Frame * frame2 = new Frame ("보통이");

    frame1->Add(new Button("사각형"));

    frame2->Add(new Button("타원"));
    frame2->Add(new CheckBox("동의"));
    frame2->Add(new Frame("홀쭉이"));
    frame1->Add(frame2);
    frame1->Show();
    
}
