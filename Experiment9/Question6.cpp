// question => wap in c++ to increment the values from using friend function
#include<iostream>
using namespace std;
class demo {
  int p,q,r,s;
  public:
  void input(){
    cout<<"enter the value of p,q,r,s\n";
    cin>>p>>q>>r>>s;
  }
  void show(){
    cout<<"p = "<<p<<endl;
     cout<<"q = "<<q<<endl;
      cout<<"r = "<<r<<endl;
       cout<<"s = "<<s<<endl;
  }
  friend void increment(demo &obj);
};
void increment(demo &obj){
  obj.p++;
  obj.q++;
  obj.r++;
  obj.s++;
}
int main(){
  class demo A;
  A.input();
  cout<<"before increment";
  A.show();
  increment(A);
  cout<<"after increment";
  A.show();
  return 0;
}