// question => wap in c++ to overlaod binary + operator
#include<iostream>
using namespace std;
class demo{
    private:
    int a,b;
    public:
    void input(){
    cout<<"enter value of a & b\n";
    cin>>a>>b; 
    }
    demo operator + (demo obj)
    {
        demo temp;
        temp.a = a+obj.a;
        temp.b = b+obj.b;
        return temp;
    }
    void show(){
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
};
int main(){
    class demo A,B,C;
    cout<<"enter value for object A\n";
    A.input();
    cout<<"enter value for object B\n";
    B.input();
    C=A+B;
    cout<<"A+B"<<endl;
    C.show();
    return 0;
}