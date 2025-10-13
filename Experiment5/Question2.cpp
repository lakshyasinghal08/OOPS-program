// question => wap in c++ to print area of 2 rectangle using parameterized constructor
#include <iostream>
using namespace std;
class rectangle{
    int length , breadth;
    public:
    rectangle(int l , int b){
        length = l;
        breadth = b;}
        int area(){
            return length*breadth;
        }
        void display(){
            cout<<"length = "<<length<<endl;
            cout<<"breadth = "<<breadth<<endl;
        }
    };
    int main(){
        int l1,b1,l2,b2;
        cout<<"Enter length and breadth of 1st rectangle: ";
        cin>>l1>>b1;
        rectangle r1(l1,b1);
        r1.display();
        cout<<"Area of 1st rectangle = "<<r1.area()<<endl;
        cout<<"Enter length and breadth of 2nd rectangle: ";
        cin>>l2>>b2;
        rectangle r2(l2,b2);
        r2.display();
        cout<<"Area of 2nd rectangle = "<<r2.area()<<endl;
        return 0;
    }