//  objective == implement operator overloading concepts
//question =>  wap in c++ show the concept of uniary operator overloading 
#include<iostream>
using namespace std;
class demo
{
    private:
    int  p,q,r,s;
    public:
    void input(){
        cout<<"enter value of p,q,r,s";
        cin>>p>>q>>r>>s;
    }
    void increment(){
        p++;
        q++;
        r++;
        s++;
    }
    void show(){
        cout<<"p="<<p<<endl;
        cout<<"q="<<q<<endl;
        cout<<"r="<<r<<endl;
        cout<<"s="<<s<<endl;
    }
};
int main(){
    class demo d;
    d.input();
    cout<<"before increment\n";
    d.show();
    d.increment();
    cout<<"after increment\n";
    d.show();
    return 0;
}