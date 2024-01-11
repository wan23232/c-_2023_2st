#include <iostream>
using namespace std;
int main(){
    int height;
    int weight;

    cin >> height >> weight;     // 연산자. overload 되어있다.
    cout << "체중: " << weight ;
    cout << ", 신장: " << height << "입니다." << endl;
    return 0;
}
