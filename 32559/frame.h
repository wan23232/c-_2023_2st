#pragma once
#include "component.h"
#include <string>
#include <list>
using namespace std;
class Frame : public Component{
    public:
        Frame(std::string);
        void Add(Component *);
        void Show()override;
    protected:
        list<Component *> * subcomponents_;
};
