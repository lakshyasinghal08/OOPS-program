// question => wap in c++ to enter a interger , float , char and print using new and delete opearator
#include <iostream>
using namespace std;
int main(){
    int *a = new int;
    float *b = new float;
    char *c = new char[3];
    char *d = new char[6];
    cout<<"Enter a interger : ";
    cin>>*a;
    cout<<"Enter a float :";
    cin>>*b;
    cout<<"Enter a char :";
    cin>>*c;
    cout<<"Enter a string :";
    cin>>*d;
    cout<<"Interger : "<<*a<<endl;
    cout<<"Float : "<<*b<<endl;
    cout<<"Char : "<<*c<<endl;
    cout<<"String : "<<*d<<endl;
    delete a;
    delete b;
    delete c;
    delete d;
    return 0;
}
   