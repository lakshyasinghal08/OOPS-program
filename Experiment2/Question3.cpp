// question => wap in c++ enter n student details with 'n' subject marks using array within structure or within structure
#include<iostream>
using namespace std;

struct student
{
    char name[20];
    int roll;
    float fees;
    int marks[5];
} ;

int main(){
    struct student s[5];
    int n  ;
    cout<<"how many student data you want to enter :";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter your name : ";
        cin>>s[i].name;
        cout<<"Enter your roll no : ";
        cin>>s[i].roll;
        cout<<"Enter your fees : ";
        cin>>s[i].fees;
        cout<<"Enter marks of 5 subjects : ";
        for(int j=0;j<5;j++){
            cin>>s[i].marks[j];
        }
    }
    for(int i=0;i<n;i++){
        cout<<"student data\n";
        cout<<"Name: "<<s[i].name<<endl;
        cout<<"Rollno: "<<s[i].roll<<endl;
        cout<<"Fees: "<<s[i].fees<<endl;
        cout<<"Marks: ";
        for(int j=0;j<5;j++){
            cout<<s[i].marks[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}