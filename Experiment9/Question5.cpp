// question => wap in c++ to overload binary plus opearator using friend function
#include<iostream>
using namespace std;
class demo{
  private:
  int a,b;
  public:
  void input(){
    cout<<"enter the value of a and b";
    cin>>a>>b;
  }
  void show(){
     cout<<"a = "<<a<<endl;
      cout<<"b = "<<b<<endl;
  }
  friend  demo operator + (demo obj1,demo obj2);
};
demo operator + (demo obj1,demo obj2){
  demo temp;
  temp.a = obj1.a + obj2.a;
  temp.b = obj1.b + obj2.b;
  return temp;
}
int main(){
  class demo A,B,C;
  cout<<"enter value for object A\n";
  A.input();
  cout<<"enter value for object B\n";
  B.input();
  C = A+B;
  cout<<"result =\n";
  C.show();
  return 0;
}