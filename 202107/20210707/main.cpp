#include <iostream>

//#define MAX 4 

using namespace std ;

const int MAX = 4 ;

class A {
    private:
        int max;
        static const int MAX; //这是个声明。
        enum {Nmax = 8};
        int sl[Nmax];
    
    public:
        A(): max(5) {};
        int printmax(void)const {
            cout << max << endl;
            cout << &MAX << endl;
            cout << sl[0] << endl;
            return 0;
        }

};

const int A::MAX = 7;


//以inline 函数模版代替宏！
template<typename T>
int f(const T& rhs){
    cout << "test inline" << endl;
    return 0;
}

template<typename T>
inline void callWithMax(const T& a, const T& b){
    f(a>b ? a : b);
}


int main(void){

    //cout << MAX << endl;
    A a;
    a.printmax();
    callWithMax(7,10);
    return 0;
}
