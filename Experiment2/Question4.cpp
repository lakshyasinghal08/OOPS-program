// question => wap in c++ enter 'n' student records using array of structure
#include<iostream>
using namespace std;
struct student{
    int rollno;
    char name[20];
    float fees;
    int marks;
};
int main(){
    int n;
    struct student s[10];
    cout<<"how many student data you want to enter\n";
    cin>>n;
    cout<<"enter your data\n";
    for(int i=0; i<n; i++){
        cout<<"enter rollno , name , fees , marks \n";
        cin>>s[i].rollno>>s[i].name>>s[i].fees>>s[i].marks;
    }
    for(int i=0; i<n; i++){
    cout<<"rollno = "<<s[i].rollno<<endl;
    cout<<"name = "<<s[i].name<<endl;
    cout<<"fees = "<<s[i].fees<<endl;
    cout<<"marks = "<<s[i].marks<<endl;
    }
    return 0;
}