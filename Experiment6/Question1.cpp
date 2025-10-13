// object => implement friend function to access data of a class and using of this pointer
// question => wap in c++ to find a square of a number using friend function
#include <iostream>
using namespace std;
class demo{
    int x;
    public:
    void input(int n){
        x = n;
    }
    friend int findsqr(demo);
};
   int findsqr(demo d){
    return d.x * d.x;
   }
   int main(){
    class demo f;
    f.input(4);
    cout<<"square is = "<<findsqr(f);
    return 0;
   }