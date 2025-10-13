// question =>  wap in c++ swap two different numbers using function templates
#include<iostream>
using namespace std;
#include<typeinfo>
template<typename T>
void swapp(T&a , T&b){
  T temp = a;
  a=b;
  b = temp;
}
int main(){
  int x,y;
  float f1,f2;
  char ch1,ch2;
  cout<<"enter two interger\n";
  cin>>x>>y;
  cout<<"enter two float values\n";
  cin>>f1>>f2;
  cout<<"enter two characters value\n";
  cin>>ch1>>ch2;
  cout<<"before swapping\n";
  cout<<"x = "<<x<<endl;
  cout<<"y = "<<y<<endl;
  cout<<"f1 = "<<f1<<endl;
  cout<<"f2 = "<<f2<<endl;
  cout<<"ch1 = "<<ch1<<endl;
  cout<<"ch2 = "<<ch2<<endl;
  swap(x,y);
  swap(f1,f2);
  swap(ch1,ch2);
  cout<<"after swapping";
 cout<<"x = "<<x<<endl;
  cout<<"y = "<<y<<endl;
  cout<<"f1 = "<<f1<<endl;
  cout<<"f2 = "<<f2<<endl;
  cout<<"ch1 = "<<ch1<<endl;
  cout<<"ch2 = "<<ch2<<endl;
  return 0;
}