// question => wap in c++ constant data memeber function in the class
#include <iostream>
using namespace std;
class demo{
    const int x; int y;
    public:
    demo(int a, int b) : x(a), y(b){};
    void display() const{
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
    }

    void changey(int newy){
        y = newy;
        
    }
};
int main(){
   
        demo d(10,20);
        d.display();
        d.changey(30);
        d.display();
    
    return 0;
}
class damn{
    const int c; int d;
    public:
    damn(int a , int b) : c(a),d(b){};
    void display() const{
        cout<<"c = "<<c<<endl;
        cout<<"d = "<<d<<endl;
    }
    void changey(int neww){
        d = neww;
    }
};
int main(){
    damn d(20,30);
    d.display();
    d.changey(100);
    d.display();

    return 0;
}