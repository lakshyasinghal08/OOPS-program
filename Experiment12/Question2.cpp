// question =>  wap in c++ reading and writing file data using file handling functions
#include<iostream>
using namespace std;
#include<fstream>
int main(){
  fstream rw;
  rw.open("demo2.txt",ios::out);
  char mcomp[20], model[20];
  float price;
  cout<<"enter mobile model\n";
 cin.getline(model,10);
 cout<<"enter mobile company\n";
 cin.getline(mcomp,20);
 cout<<"enter mobile price\n";
 cin>>price;
 rw<<model<<endl<<mcomp<<endl<<price<<endl;
 rw.close();
 rw.open("demo.txt",ios::in);
 rw.getline(model,10);
 rw.getline(mcomp,20);
 rw>>price;
 cout<<"mobile details read from file\n";
 cout<<"model ="<<model<<endl;
 cout<<"mobile company ="<<mcomp<<endl;
 cout<<"price ="<<price<<endl;
 rw.close();
 return 0;
}