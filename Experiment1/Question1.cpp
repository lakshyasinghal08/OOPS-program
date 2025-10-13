// objective => understand the basic of c++ library variable , data input and output
// question => wap in c++ enter your detail and print output
#include<iostream>
using namespace std;
int main(){
    int rollno;
    char name[20];
    char cname[20];
    float fees;
    cout<<"Enter your roll no : ";
    cin>>rollno;
    cout<<"Enter your name : ";
    cin>>name;
    cout<<"enter your college name : ";
    cin>>cname;
    cout<<"Enter your fees : ";
    cin>>fees;
    cout<<"Your roll no is : "<<rollno<<endl;
    cout<<"Your name is : "<<name<<endl;
    cout<<"Your college name is : "<<cname<<endl;
    cout<<"Your fees is : "<<fees<<endl;
    return 0;
}