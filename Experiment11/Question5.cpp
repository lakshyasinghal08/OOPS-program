// question => wap in c++ to swap two interger nad float number using class templates
#include<iostream>
using namespace std;
#include<typeinfo>
template<class T>
class mwswap{
  public:
  void swap(T &a , T &b){
    T temp  = a;
    a = b;
    b = temp;
  }
};
int main(){
  mwswap< int > s1;
  int x,y;
  cout<<"enter the value of x and y\n";
  cin>>x>>y;
  cout<<"before swap = "<<"x ="<<x<<endl<<"y = "<<y<<endl;
  s1.swap(x,y);
  cout<<"after swap = "<<"x ="<<x<<endl<<"y = "<<y<<endl;
  mwswap<float>s2;
  float p,q;
  cout<<"enter the value of p and q\n";
  cin>>p>>q;
  cout<<"before swap = "<<"p ="<<p<<endl<<"q = "<<q<<endl;
  s2.swap(p,q);
  cout<<"after swap = "<<"p ="<<p<<endl<<"q = "<<q<<endl;
  return 0;
}