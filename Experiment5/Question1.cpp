//objective => program to understand different type of constructor and destructor
// question => wap in c++ tp print name and age using default constructor
#include <iostream>
using namespace std;
class student{
    string name;
    int age;
    public:
    student(){
        cout<<"Name: ";
        cin>>name;
        cout<<"Age: ";
        cin>>age;
    }
    void display(){
        cout<<"Name: "<<name;
        cout<<"Age: "<<age;
    }
};
int main(){
    student s1;
    s1.display();
    return 0;
}