// question => wap in c++ enter n number in array where a number is greater than 100 is taken an exception is throw 
#include<iostream>
using namespace std;
#include<exception>
int main(){
  int  a[100],n;
  cout<<"how many number you want to enter\n";
  cin>>n;
  cout<<"eneter"<<n<<"numbers:"<<endl;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n;i++){
    try{
    if(a[i]>100)
    throw"greater than 100";
    }
  catch(const char *e){
    cout<<a[i] <<":"<<e<<endl;
  }}
  return 0;
}