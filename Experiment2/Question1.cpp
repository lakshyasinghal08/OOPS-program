// objective => c++ program using concept of structure
// question => wap in c++ insert student details using structure
#include<iostream>
using namespace std;
int main(){
    struct student{
        char name[20];
        int roll;
        float fees;
    }s1;
    cout<<"Enter your name ,rollno and fees: ";
    cin>>s1.name>>s1.roll>>s1.fees;
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Rollno: "<<s1.roll<<endl;
    cout<<"Fees: "<<s1.fees<<endl;
    return 0;
}