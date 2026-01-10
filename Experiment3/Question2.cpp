// question => wap to perform all airthmetic opeartion using class and object [member function declaration outside the class]
#include <iostream>
using namespace std;

class operation {
    private:
    int  a, b , add , sub , mul , div , rem;
    public:
    void input();
    void airthmetic();
    void show();
};

void operation::input() {
    cout<<"enter the value of a and b\n";
    cin>>a>>b;
}


void operation::airthmetic() {
   add = a+b;
   sub = a-b;
   mul = a*b;
   div = a/b;
   rem = a%b;
}

void  operation::show() {
  cout<<"addition = "<<add<<endl;
  cout<<"substraction = "<<sub<<endl;
  cout<<"multiplication = "<<mul<<endl;
  cout<<"division = "<<div<<endl;
  cout<<"remender = "<<rem<<endl;
}


int main() {
     class operation o;
   o.input();
   o.airthmetic();
   o.show();
    return 0;
}

class operationn {
private:
int a , b,sum,sub,mul,div,mod;
public:
void input();
void airth();
void show();
};

void operationn :: input(){
  cout<<"enter the value of a \n";
  cin>>a;
  cout<<"enter the value of b \n";
  cin>>b;
}

void operationn :: airth(){
  sum = a+b;
  sub = a-b;
  mul = a*b;
  div = a/b;
  mod = a%b;
}

void operationn :: show(){
  cout<<"addition = "<<sum<<endl;
  
  cout<<"substraction = "<<sub<<endl;
  
  cout<<"multiply = "<<mul<<endl;
  
  cout<<"division = "<<div<<endl;
  
  cout<<"reminder = "<<mod<<endl;
}
int main(){
  class operationn o;
  o.input();
  o.airth();
  o.show();

  return  0;
}