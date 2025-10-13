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