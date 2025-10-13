// question => wap in c++ show the concept of hieriarcal inheritance
#include <iostream>
using namespace std;
class book{
   protected:
   char bname[20];
   char aname[20];
   public:
   void input(){
      cout<<"enter book name";
      cin>>bname;
      cout<<"enter author name name";
      cin>>aname;
   }
   void show(){
      cout<<"book name = "<<bname<<endl;
      cout<<"author name = "<<aname<<endl;
   }
};
class detail : public book{
   protected:
   float price;
   int yop;
   public:
   void put(){
      cout<<"enter price\n";
      cin>>price;
      cout<<"enter year of pub\n";
      cin>>yop;
   }
   void get(){
      cout<<"price = "<<price<<endl;
      cout<<"yop = "<<yop<<endl;
   }
};
class allotment : public book {
 private:
 int doA;
 public:
 void in(){
   cout<<"enter date od allotment\n";
   cin>>doA;
 }
 void out(){
   cout<<"date of allotment = "<<doA<<endl;
 }
};
int main(){
   class allotment b;
   b.input();
   b.show();
   b.in();
   b.out();
   return 0;
}