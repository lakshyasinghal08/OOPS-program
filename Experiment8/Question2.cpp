// question => wap in c++ show the concept of multilevel inheritance
#include <iostream>
using namespace std;
class student {
   protected :
   char name[100];
   int age;
   public : 
   void input(){
      cout<<"enter the name";
      cin>>name;
      cout<<"enter the age";
      cin>>age;
   }
   void show(){
      cout<<"name = "<<name<<endl;
      cout<<"age = "<<18<<endl;
   }
};
class detail : public student {
   private :
   char fname[20];
   float fees;
   public:
   void in(){
      cout<<"enter the father name";
      cin>>fname;
      cout<<"enter the colllege fees";
      cin>>fees;
   }
   void out(){
      cout<<"father name = "<<fname<<endl;
          cout<<"collge fees = "<<fees<<endl;
   }
};
class marks : public detail{
   private:
   int sub1,sub2,sub3,sub4,sub5;
   float total,per;
   public:
   void put(){
      cout<<"enter 5 subject marks\n";
      cin>>sub1>>sub2>>sub3>>sub4>>sub5;
   }
   void get(){
      total = sub1 + sub2 + sub3 + sub4 + sub5;
      per = (total/500)*100;
      cout<<"total = "<<total<<endl;
      cout<<"per = "<<per<<endl;
   }
};
int main(){
   class marks m;
   m.input();
   m.in();
   m.put();
   m.show();
   m.out();
   m.get();
   return 0;
}
class stuu{
   int age;
   int id;
   public:
   void input(){
      cout<<"enter the age and the id :";
      cin>>age>>id;
   }
   void show(){
      cout<<"age = "<<age<<endl;
      cout<<"id = "<<id<<endl;
   }
};
class dent : public stuu{
   char name[20];
   char sname[30];
   public:
   void in(){
      cout<<"enter the name and the sirname :";
      cin>>name>>sname;
   }
   void showw(){
      cout<<"name = "<<name<<" "<<sname<<endl;
   }
};
class teach : public dent{
   int fee;
   float mark;
   public:
   void debit(){
      cout<<"enter the fee and the marks :";
      cin>>fee>>mark;
   }
   void credit(){
      cout<<"fee = "<<fee<<endl;
      cout<<"mark = "<<mark<<endl;
   }
};

int main(){
   class teach t;
   t.input();
   t.in();
   t.debit();
   t.show();
   t.showw();
   t.credit();

   return 0;
}