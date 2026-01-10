// question => wap in c++ enter student data with 5 subject marks and print using array within class
#include <iostream>
using namespace std;
class student{
    int rollno;
    char name[10];
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
        cout<<"Marks :";
        for(int i=0; i<5; i++){
            cout<<marks[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    class student st;
    st.input();
    st.show();
    return 0;
}

class student{
    private :
    int id;
    char name[20];
    int marks[10];
    public:
    void input(){
        cout<<"enter the name and the id \n";
        cin>>name>>id;
        cout<<"enter the marks for 3 subject:";
        for(int i=0;i <3; i++){
            cin>>marks[i];
        }
    }
    void show(){
        cout<<"name = "<<name<<endl;
        cout<<"id = "<<id<<endl;
        cout<<"student marks:";
        for(int i=0; i<3; i++){
            cout<<marks[i]<<endl;
        }
    }
};
int main(){
class student s;
s.input();
s.show();

return 0;
}