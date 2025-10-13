// question => wap in c++ overload uniary ++ and uniary -- and increment and decrement and print ouptput
#include<iostream>
using namespace std;
class demo
{
    private:
    int  p,q,r,s;
    public:
    void input(){
        cout<<"enter value of p,q,r,s";
        cin>>p>>q>>r>>s;}
        void increment(){
            p++;
            q++;
            s++;
            r++;
        }
        void decrement(){
            p--;
            q--;
            s--;
            r--;
        }
        void show(){
            cout<<"p="<<p<<endl;
        cout<<"q="<<q<<endl;
        cout<<"r="<<r<<endl;
        cout<<"s="<<s<<endl;
    }
        };
        int main(){
            class demo k;
            k.input();
            cout<<"before increment ";
             k.show();
            k.increment();
            cout<<"after increment ";
            k.show();

          
            cout<<"before decrement";
            k.show();
             k.decrement();
            
            cout<<"after decrement";
            k.show();
            return 0;
        }