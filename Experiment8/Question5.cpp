// question => wap in c++ show the concept of hybrid inheritance
#include <iostream>
using namespace std;
class A{
   public:
   void show(){
      cout<<"hello from hybrid inheritance\n";
   }
};
class B:  virtual public  A {
};
class C :   virtual public  A {
};
class D: public B , public C{
};
int main(){
   class D obj;
   obj.show();
   return 0;
}