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

int main(void){

    //cout << MAX << endl;
    A a;
    a.printmax();
    return 0;
}
