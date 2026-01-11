// object => static data member and member function
// question => wap to understand the uses of static data member and member function
#include <iostream>
using namespace std;
class staticdemo{
static int s;
static float f;
static char ch;
public:
static void display(){
    cout<<"s = "<<s<<endl;
    cout<<"f = "<<f<<endl;
    cout<<"ch = "<<ch<<endl;
}};
int staticdemo :: s = 20;
float staticdemo :: f = 10.5;
char staticdemo :: ch = 'a';

int main(){
    class staticdemo d;
    staticdemo :: display();
    return 0;
}

class student{
    static int a;
    static float b;
    static char c;
    public:
    static void show(){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        cout<<"c = "<<c<<endl;
    }
};
int student :: a = 100;
float student :: b = 2.3;
char student ::  c = 'l';

int main(){
    class student s;
    student :: show();

    return 0;
}