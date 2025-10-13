// question => wap in c++ enter student details with 'n' students marks using array within structure
#include<iostream>
using namespace std;
struct student
{
    char name[20];
    int roll;
    float fees;
    int marks[5];
} s1;
int main()
{
    cout<<"Enter your name ,rollno and fees: ";
    cin>>s1.name>>s1.roll>>s1.fees;
    cout<<"Enter marks of 5 subjects: ";
    for(int i=0;i<5;i++)
    {
        cin>>s1.marks[i];
    }
    cout<<"student data\n";
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Rollno: "<<s1.roll<<endl;
    cout<<"Fees: "<<s1.fees<<endl;
    cout<<"Marks: ";
    for(int i=0;i<5;i++)
    {
        cout<<s1.marks[i]<<" ";
    }
    return 0;
}