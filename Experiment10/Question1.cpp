// objective => write a program to understand exeption handling techniques
// quwstion => wap in c++ show the concept of exception handling
#include<iostream>
using namespace std;
#include<exception>
int main(){
  int a,b;
  cout<<"enter the value of a & b";
  cin>>a>>b;
  try{
    if(b==0)
    throw " division by zero not allowed";
    int result = a/b;
    cout<<"result = "<<result<<endl;
  }
  catch(const char *msg){
    cout<<"error : "<<msg<<endl;
  }
  return 0;
}