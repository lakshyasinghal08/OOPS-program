// question => wap in c++ to enter three number and find the max , min and mid number using class and object
#include <iostream>
using namespace std;
class op {
 private:
 int a,b,c;
 public:
 void input();
 void mmm();    
};
void op :: input(){
    cout<<"enter the value of a , b, c\n";
    cin>>a>>b>>c;
}
void op :: mmm(){
    int max , mid , min;
    if(a>b && a>c){
        max = a;
        mid = (b>c)?b:c;
        min = (b<c)?b:c;
    }
    else if(b>a && b>c){
        max = b;
        mid = (a>c)?a:c;
        min = (a<c)?a:c;
    }
    else{
        max = c;
        mid = (a>b)?a:b;
        min = (a<b)?a:b;
    }
    cout<<"max ="<<max<<endl;
    cout<<"mid ="<<mid<<endl;
    cout<<"min ="<<min<<endl;
};
int main(){
    class op o;
    o.input();
    o.mmm();
    return 0;
}