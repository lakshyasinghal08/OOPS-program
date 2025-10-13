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