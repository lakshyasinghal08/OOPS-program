//objective ==  inplement different type of of inheritance and virtual function 
// question => wap in c++ show the concept of single level inheritance
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
      cout<<"age = "<<age<<endl;
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
int main(){
class detail st;
st.input();
st.show();
st.in();
st.out();
return 0;
}
class student{
   private:
   int age;
   char name[20];
   public:
   void input(){
      cout<<"enter the data:";
      cin>>age;
      cout<<"enter the name :";
      cin>>name;
   }
   void show(){
      cout<<"name = "<<name<<endl;
      cout<<"age = "<<age<<endl;
   }
};
class delta : public student {
   private:
   int id;
   char sname[20];
   public:
   void in(){
      cout<<"enter the id  :";
      cin>>id;
      cout<<"enter the sir name :";
      cin>>sname;
   }
   void out(){
      cout<<"id = "<<id<<endl;
      cout<<"sir name = "<<sname<<endl;
   }
};

int main(){
   class delta d;
   d.input();
   d.in();
   d.show();
   d.out();

   return 0;
}