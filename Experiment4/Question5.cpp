// question => wap in c++ to find area of rectangle , square and circle using concept of function overloading
#include <iostream>
using namespace std;
int main(){
    void area(float);
    void area(int);
    void area(int,int);
    float r = 10;
    int l = 10;
    int b = 10;
    area(r);
    area(l,b);
    area(l);
    return 0;
}
void area(float s){
    cout<<"Area of circle : "<<3.14*s*s<<endl;
}
void area(int l,int b){
    cout<<"Area of rectangle : "<<l*b<<endl;
}
void area(int s){
    cout<<"Area of square : "<<s*s<<endl;
}