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