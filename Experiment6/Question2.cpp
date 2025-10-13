// question => wap in c++ to swap the values of two different classes
#include <iostream>
using namespace std;
class B;
class A{
    int x;
    public:
    void input(){
        cout<<"enter the value of x\n";
        cin>>x;
    }
    void display(){
        cout<<"x = "<<x<<endl;
    }
    friend void swap(A&,B&);
};
class B{
    private:
    int y;
    public:
    void input(){
        cout<<"enter the value of y\n";
        cin>>y;
    }
    void display(){
        cout<<"y = "<<y<<endl;
    }
    friend void swap(A&,B&);
};
void swap(A &a,B &b){
    int temp = a.x;
    a.x = b.y;
    b.y = temp;
}
int main(){
    class A a;
    class B b;
    a.input();
    b.input();
    cout<<"before swapping\n";
    a.display();
    b.display();
    swap(a,b);
    cout<<"after swapping\n";
    a.display();
    b.display();
    return 0;
}