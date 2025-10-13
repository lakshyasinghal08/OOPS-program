// question => wap to print data using copy constructor
#include <iostream>
using namespace std;
class demo{
    int data;
    public:
    demo(){
        data = 300;
        cout<<"default constructor"<<endl;
    }
    demo(int x){
        data = x;
    }
    demo(demo &d){
        data = d.data;
        cout<<"copy constructor"<<endl;
    }
    void display(){
        cout<<"data = "<<data<<endl;
    }
};
int main(){
    demo d1;
    demo d2 = d1;
    demo d3;
    d3 = d1;
    demo d4(d3);
    d1.display();
    d2.display();
    d3.display();
    d4.display();
    return 0;
}