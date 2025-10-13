// question => wap in c++ add and delete , print student name and rollno and delete the space using concept class
#include <iostream>
using namespace std;
class student{
    int rollno;
    char name[20];
    public:
    void input(){
        cout<<"Enter rollno : ";
        cin>>rollno;
        cout<<"Enter name : ";
        cin>>name;
}
    void show(){
    cout<<"Rollno : "<<rollno<<endl;
    cout<<"Name : "<<name<<endl;       
    }
};
int main(){
    class student *s = new student;
    s -> input();
    s -> show();
       return 0;
    }