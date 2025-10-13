// question => wap in c++ enter 5 student marks and print thier average marks and GPA
#include <iostream>
using namespace std;
int main(){
    int *marks = new int[5];
    float sum = 0;
    cout<<"Enter marks of 5 students : ";
    for(int i=0;i<5;i++){
        cin>>marks[i];
        sum = sum + marks[i];
    }
    float average = sum/5;
    float gpa = average/10;
    cout<<"total marks : "<<sum<<endl;
    cout<<"Average marks of 5 students : "<<average<<endl;
    cout<<"GPA of 5 students : "<<sum/5<<endl;
    return 0;
}