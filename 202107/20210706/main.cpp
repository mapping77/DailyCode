#include <iostream>

using namespace std;

extern const int gl;

int main(){
    /*
    //定义在函数体内的内置类型，没执行默认初始化，在这个版本编译器没报错。
    //func();
    double a_in;
    cout << a_in << endl;
    */

    //列表初始化存在信息丢失会报错。
    //int a={1.2};
    //cout << a << endl; 

    //
    //const int a = 10;
    //const int *p = &a;
    //cout << p << endl;


    
    cout << gl << endl;
    return 0;
}