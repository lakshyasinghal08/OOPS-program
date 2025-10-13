// question => wap in c++ check the number is even using exception handling
#include<iostream>
using namespace std;
#include<exception>
int main(){
  int n;
  cout<<"enter the number\n";
  cin>>n;
  try{
    if(n%2 == 0)
    throw "number is  even\n";
    cout<<"the number you entered is odd : "<<n;
  }
  catch(const char *msg){
    cout<<"number : "<<msg<<endl;
  }
  return 0;
}