// objective => write program to understand file handling techniques
// question => wap in c++ writing a student data into file and reading using file handling function
#include<iostream>
using namespace std;
    #include<fstream>
int main(){
  fstream sw;
  sw.open("demo1.txt",ios::out);
  char name[20];
  float marks;
  int rollno;
 cout<<"enter the name\n";
 cin.getline(name,10);
 cout<<"enter the marks\n";
 cin>>marks;
 cout<<"enter the rollno\n";
 cin>>rollno;
 sw<<name<<endl<<marks<<endl<<rollno<<endl;
 sw.close();
 sw.open("demo1.txt",ios::in);
 sw.getline(name,10);
 sw>>marks;
 sw>>rollno;
 cout<<"stuedent  details read from file\n";
 cout<<"name ="<<name<<endl;
 cout<<"marks ="<<marks<<endl;
 cout<<"rollno ="<<rollno<<endl;
 sw.close();
 return 0;
}
int main(){
ofstream evenfile("even.txt");
ofstream oddfile("odd.txt");
int num;
cout<<"enter the numbers  :";
for(int i=0; i<20; i++){
    cin>>num;

    if(num % 2 == 0){
        evenfile<<num<<" "<<endl;
    }
    else{
        oddfile<<num<<" "<<endl;
    }
}
evenfile.close();
oddfile.close();

ifstream readeven("even.txt");
ifstream readodd("odd.txt");

while(readeven >> num){
    cout<<num<<endl;
}
while(readodd >> num){
    cout<<num<<endl;
}
readeven.close();
readodd.close();

return 0;
}

class A{
    private:
    int id;
    public:
    void input(){
        cout<<"enter the id :";
        cin>>id;
    }
    void show(){
        cout<<"id = "<<id<<endl;
    }
    int setid(int id){
     this->id = id;
    }
};
int main(){
    class A a;
    a.input();
    a.show();
    a.setid(101);
    a.show();

    return 0;
}
