#include <iostream>

//这段code用来演示 const op[] 与non const op[] 运算符的定义与调用。


using namespace std ;

class TextBook {
    private:
    string text;

    public:
    TextBook(const string& rhs):text(rhs){};
    const char& operator[] (std::size_t position) const{ return text[position]; }
    char& operator[] (std::size_t position) { return text[position]; }
};


int main(void){
    TextBook tb("hello");
    const TextBook ctb("world");
    tb[0]  = 'x';
    cout << tb[0] << endl;
    cout << ctb[0] << endl;
    return 0;
}