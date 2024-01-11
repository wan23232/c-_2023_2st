#pragma once
#include <string>
#include "component.h"
using namespace std;
class Button : public Component{
    // 공개 메소드
    public:
        Button(string);  // 기본 생성자.
        void Show()override;
    // 상속할 함수 및 변수
    protected:

    // 멤버 변수 및 비공개 함수
    private:
};
