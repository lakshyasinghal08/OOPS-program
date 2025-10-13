// question => wap in c++  enter 'n' student records using array of object and print the value
#include <iostream>
using namespace std;
class student{
    int rollno;
    char name[20];
    float fees;
    public:
    void input(){
        cout<<"enter the rollno\n";
        cin>>rollno;
         cout<<"enter the name\n";
        cin>>name;
         cout<<"enter the fees\n";
        cin>>fees;
    }
    void show(){
        cout<<"rollno = "<<rollno<<endl;
        cout<<"name = "<<name<<endl;
        cout<<"fees = "<<fees<<endl;
    }
};
int main(){
    class student st[10];
    int n;
    cout<<"how many student data you want to enter\n";
    cin>>n;
    cout<<"Enter studeny data\n";
    for(int i=0; i<n; i++){
        st[i].input();
    }
    cout<<"student data\n";
     for(int i=0; i<n; i++){
        st[i].show();
    }
    return 0;
}