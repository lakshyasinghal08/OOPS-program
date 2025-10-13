// question => WAP in C++ to overload unary ++ operator using friend function
#include <iostream>
using namespace std;

class demo {
private:
    int p, q, r, s;
public:
    void input() {
        cout << "enter value of p,q,r,s\n";
        cin >> p >> q >> r >> s;
    }
    void show() const {
        cout << "p=" << p << endl;
        cout << "q=" << q << endl;
        cout << "r=" << r << endl;
        cout << "s=" << s << endl;
    }
    friend void increment(demo &obj);
};

void increment(demo& obj) {
    obj.p++;
    obj.q++;
    obj.r++;
    obj.s++;
}

int main() {
    demo d;
    d.input();
    cout << "before increment\n";
    d.show();
    increment(d);
    cout << "after increment\n";
    d.show();
    return 0;
}