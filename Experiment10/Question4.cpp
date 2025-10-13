// question => wap in c++ show the exception handling through exception int a-b where a>b
#include<iostream>
using namespace std;
#include<exception>
int main(){
  int a,b;
  cout<<"enter the value of a and b";
  cin>>a>>b;
  int m = a>b? true:false;
  try{
    if(m){
      cout<<"substraction = "<<a-b<<endl;
    }
    else{
      throw"substraction not possible";
    }
  }
  catch(const char *p){
    cout<<"caught an exeption\n";
    cout<<p<<endl;
  }
  return 0;
}