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

class update{
    private:
    int a,b,c,d;
    public:
    void input(){
        cout<<"enter the value of the a,b,c,d";
        cin>>a>>b>>c>>d;
    }
    void show(){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        cout<<"c = "<<c<<endl;
        cout<<"d = "<<d<<endl;
    }
    friend void increment(update& obj);
};
void increment(update& obj){
obj.a++;
obj.b++;
obj.c++;
obj.d++;
}

int main(){
    class update u;
    u.input();
    cout<<"before increment :";
    u.show();
    cout<<"after increment :";
    increment(u);
    u.show();

    return 0;
}