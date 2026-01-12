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

template<typename T>
void swapp(T&a, T&b){
  T temp = a;
  a = b;
  b = temp;
}
int main(){
  int p,q;
  float r,s;
  char c1,c2;
  p = 3 , q = 9;
  r = 9.9 , s = 5.4;
  c1 = 'l', c2 = 'k';
  cout<<"before swap :";
  cout<<"p = "<<p<<endl;
  cout<<"q = "<<q<<endl;
  cout<<"r = "<<r<<endl;
  cout<<"s = "<<s<<endl;
  cout<<"c1 = "<<c1<<endl;
  cout<<"c2 = "<<c2<<endl;
  swap(p,q);
  swap(s,r);
  swap(c1,c2);
  cout<<"after swap :";
  cout<<"p = "<<p<<endl;
  cout<<"q = "<<q<<endl;
  cout<<"r = "<<r<<endl;
  cout<<"s = "<<s<<endl;
  cout<<"c1 = "<<c1<<endl;
  cout<<"c2 = "<<c2<<endl;

  return 0;
}