#include <iostream>

using namespace std;

int te( int (&arr)[10] ){
    cout << arr[0] << endl;
    return 0;
}

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


    //extern const int gl;
    //cout << gl << endl;
    

    //形参是数组引用
    int a[10] = {1,2};
    te(a);
    return 0;
}