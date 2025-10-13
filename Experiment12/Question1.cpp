// objective => write program to understand file handling techniques
// question => wap in c++ writing a student data into file and reading using file handling function
#include<iostream>
using namespace std;
    #include<fstream>
int main(){
  fstream sw;
  sw.open("demo1.txt",ios::out);
  char name[20];
  float marks;
  int rollno;
 cout<<"enter the name\n";
 cin.getline(name,10);
 cout<<"enter the marks\n";
 cin>>marks;
 cout<<"enter the rollno\n";
 cin>>rollno;
 sw<<name<<endl<<marks<<endl<<rollno<<endl;
 sw.close();
 sw.open("demo1.txt",ios::in);
 sw.getline(name,10);
 sw>>marks;
 sw>>rollno;
 cout<<"stuedent  details read from file\n";
 cout<<"name ="<<name<<endl;
 cout<<"marks ="<<marks<<endl;
 cout<<"rollno ="<<rollno<<endl;
 sw.close();
 return 0;
}