// question => wap in c++ to check the number you want to enter is positive and negative
#include<iostream>
using namespace std;
#include<exception>
int main(){
  int num;
  cout<<"enter the number\n";
  cin>>num;
  try{
    if(num < 0)
    throw " negative number entered\n";
    cout<<"your enter "<<num;
  }
  catch(const char *msg){
    cout<<"error : "<<msg<<endl;
  }
  return 0;
}
int main(){
  int a;
  cout<<"enter the valur of a :";
  cin>>a;
  try{
    if(a<0)
    throw "a is a negative number :";
    cout<<a<<"is a positive number ::";
  }
  catch(const char *msg){
    cout<<"negative : "<<msg<<endl;
  }
  return 0;
}