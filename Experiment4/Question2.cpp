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

class employee{
    private:
    int id;
    char name[20];
    public:
    void input(){
        cout<<"enter the name :";
        cin>>name;
        cout<<"enter the id  :";
        cin>>id;
    }
    void show(){
        cout<<"name = "<<name<<endl;
        cout<<"id = "<<id<<endl;
    }
};
int main(){
    class employee *s = new employee;
    s -> input();
    s -> show();

    return 0;
}