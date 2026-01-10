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

    class rect{
        private:
        int len , bre;
        public:
        rect(int a , int b){
            len = a;
            bre = b;
        }
        int area(){
            return len*bre;
        }
        void show(){
            cout<<"length = "<<len<<endl;
            cout<<"breadth = "<<bre<<endl;
        }
    };
    int main(){
        int a1,a2,b1,b2;
        cout<<"enter the len and bre for first rect :";
        cin>>a1>>b1;
        rect r1(a1,b1);
         r1.show();
         cout<<"the area of first rect = "<<r1.area()<<endl;
        cout<<"enter the len and bre for second rect :";
        cin>>a2>>b2;
        rect r2(a2,b2);
        r2.show();
        cout<<"the area of second rect = "<<r2.area()<<endl;

        return 0;
    }