// question => wap in c++ insert two numbers and perform all airthmetic  operations
#include<iostream>
using namespace std;
int main(){
    int a,b,add,sub,mul,div,rem;
    cout<<"Enter your first number :";
    cin>>a;
    cout<<"Enter your second number :";
    cin>>b;
    add = a+b;
    sub = a-b;
    mul = a*b;
    div = a/b;
    rem = a%b;
    cout<<"Addition of two numbers is :"<<add<<endl;
    cout<<"Subtraction of two numbers is :"<<sub<<endl;
    cout<<"Multiplication of two numbers is :"<<mul<<endl;
    cout<<"Division of two numbers is :"<<div<<endl;
    cout<<"Remainder of two numbers is :"<<rem<<endl;
    return 0;
}