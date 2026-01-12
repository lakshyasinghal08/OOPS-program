// question =>  wap in c++ reading and writing file data using file handling functions
#include<iostream>
using namespace std;
#include<fstream>
// int main(){
//   fstream rw;
//   rw.open("demo2.txt",ios::out);
//   char mcomp[20], model[20];
//   float price;
//   cout<<"enter mobile model\n";
//  cin.getline(model,10);
//  cout<<"enter mobile company\n";
//  cin.getline(mcomp,20);
//  cout<<"enter mobile price\n";
//  cin>>price;
//  rw<<model<<endl<<mcomp<<endl<<price<<endl;
//  rw.close();
//  rw.open("demo.txt",ios::in);
//  rw.getline(model,10);
//  rw.getline(mcomp,20);
//  rw>>price;
//  cout<<"mobile details read from file\n";
//  cout<<"model ="<<model<<endl;
//  cout<<"mobile company ="<<mcomp<<endl;
//  cout<<"price ="<<price<<endl;
//  rw.close();
//  return 0;
// }
int main(){
  fstream mob;
  mob.open("demo.txt",ios::out);
  char mcam[20] , mcop[20];
  int pric;
  cout<<"enter the mcam of mob :";
  cin.getline(mcam , 10);
  cout<<"enter the mcop of mob :";
  cin.getline(mcop , 10);
  cout<<"enter the price :";
  cin>>pric;
  mob<<mcam<<endl<<mcop<<endl;
  mob<<pric<<endl;
  mob.close();
  mob.open("demo.txt",ios::in);
  mob.getline(mcam,10);
  mob.getline(mcop,10);
  mob>>pric;
  cout<<"mobile details is here :";
  cout<<"mcam = "<<mcam<<endl;
  cout<<"mcop = "<<mcop<<endl;
  cout<<"price = "<<pric<<endl;

  return 0;
}