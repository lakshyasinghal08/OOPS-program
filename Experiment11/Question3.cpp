// question => wap in c++ add two integer and float number and find who is maximum and minimum using function template
#include<iostream>
using namespace std;
#include<typeinfo>
template<class T>
 T add (T a , T b){
  return a+b;
 }
 template<class T>
 T maximum ( T a ,T b){
  return(a>b)?a:b;
 }
 template<class T>
 T minimum (T a , T b){
  return(a<b)?a:b;
 }
 int main(){
  int x,y;
  cout<<"enter the value of x and y\n";
  cin>>x>>y;
  cout<<"addition of two ="<<add(x,y)<<endl;
  cout<<"max int = "<<maximum(x,y)<<endl;
  cout<<"min int = "<<minimum(x,y)<<endl;
  float p,q;
  cout<<"enetr two float number\n";
  cin>>p>>q;
  cout<<"add two float"<<add(p,q)<<endl;
  cout<<"max float = "<<maximum(p,q)<<endl;
  cout<<"min float = "<<minimum(p,q)<<endl;
  return 0;
 }