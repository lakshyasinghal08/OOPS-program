// question => wap in c++ to find the maximum in two number using function overloading
#include <iostream>
using namespace std;
int main(){
    int x ,y ,intmax;
    float f1 , f2 ,fmax;
    char ch1,ch2,cmax;
    int max(int , int);
    float max(float , float);
    char max(char , char);
    cout<<"enter the first interger :";
    cin>>x;
    cout<<"enter the second interger :";
    cin>>y;
    cout<<"enter the first float :";
    cin>>f1;
    cout<<"enter the second float :";
    cin>>f2;
    cout<<"enter the first char :";
    cin>>ch1;
    cout<<"enter the second char :";
    cin>>ch2;
    intmax = max(x,y);
    fmax = max(f1,f2);
    cmax = max(ch1,ch2);
    cout<<"maximum of interger is :"<<intmax<<endl;
    cout<<"maximum of float is :"<<fmax<<endl;
    cout<<"maximum of char is :"<<cmax<<endl;
    return 0;
}
int max(int x,int y){
    return (x>y)?x:y;
}
float max(float f1,float f2){
    return (f1>f2)?f1:f2;
}
char max(char ch1,char ch2){
    return (ch1>ch2)?ch1:ch2;
}