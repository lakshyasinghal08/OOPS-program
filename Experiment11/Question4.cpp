// question => wap in c++ to find the sum of two interger and float number using class templates
#include<iostream>
using namespace std;
#include<typeinfo>
template<class T>
class add{
  private:
  T num1 , num2;
  public:
  add(T a , T b){
    num1 = a;
    num2 = b;
  }
  T getsum(){
    return num1 + num2;
  }
};
int main(){
  int x,y;
  cout<<"enter the vlaue of x and y\n";
  cin>>x>>y;
  add < int > intadd(x,y);
  cout<<"sum of two integer ="<<intadd.getsum()<<endl;
  float p,q;
  cout<<"enter the vlaue of p and q\n";
  cin>>p>>q;
  add < float > floatadd(p,q);
  cout<<"sum of two integer ="<<floatadd.getsum()<<endl;
  return 0;
}