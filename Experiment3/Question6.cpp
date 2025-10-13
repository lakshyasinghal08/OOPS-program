// question => wap in c++ enter n student record having an subject marks and print details using array of class
#include <iostream>
using namespace std;
class student{
    int rollno;
    char name[20];
    int marks[40];
     public:
     void input(){
         cout<<"enter the rollno\n";
         cin>>rollno;
         cout<<"enter the name\n";
         cin>>name;
         cout<<"enter the marks\n";
         for(int i=0; i<5; i++){
             cin>>marks[i];
         }
     }
     void show(){
         cout<<"rollno = "<<rollno<<endl;
         cout<<"name = "<<name<<endl;
         cout<<"Marks : ";
         for(int i=0; i<5; i++){
             cout<<marks[i]<<" ";
         }
         cout<<endl;
     }

};
int main(){
    int m;
    cout<<"how many student data you want to enter\n";
    cin>>m;
     class student s[10];
     cout<<"enter student data\n";
    for(int i=0; i<m; i++){
        s[i].input();
    }
    cout<<"student data\n";
    for(int i=0; i<m; i++){
        s[i].show();
    }
    return 0;
}