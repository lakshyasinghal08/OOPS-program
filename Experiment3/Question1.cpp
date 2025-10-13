// objective => implement class and object concepts
// question => wap in c++ enter student data and print using class and object
#include<iostream>
using namespace std;
class student{
    private:
    int rollno;
    char name[20];
    char cname[20];
    float fees;
    public:
    void input(){
        cout<<"enter the rollno\n";
        cin>>rollno;
        cout<<"enter the name\n";
        cin>>name;
        cout<<"enter the college name\n";
        cin>>cname;
        cout<<"enter the fees\n";
        cin>>fees;
    }
    void show(){
        cout<<"rollno = "<<rollno<<endl;
        cout<<"name = "<<name<<endl;
        cout<<"college name = "<<cname<<endl;
        cout<<"fees = "<<fees<<endl;
    }
};
int main(){
    class student s;
    s.input();
    s.show();
    return 0;
}