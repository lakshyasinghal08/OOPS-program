// question => wap in c++ to enter three number and find the max , min and mid number using class and object
#include <iostream>
using namespace std;
class op {
 private:
 int a,b,c;
 public:
 void input();
 void mmm();    
};
void op :: input(){
    cout<<"enter the value of a , b, c\n";
    cin>>a>>b>>c;
}
void op :: mmm(){
    int max , mid , min;
    if(a>b && a>c){
        max = a;
        mid = (b>c)?b:c;
        min = (b<c)?b:c;
    }
    else if(b>a && b>c){
        max = b;
        mid = (a>c)?a:c;
        min = (a<c)?a:c;
    }
    else{
        max = c;
        mid = (a>b)?a:b;
        min = (a<b)?a:b;
    }
    cout<<"max ="<<max<<endl;
    cout<<"mid ="<<mid<<endl;
    cout<<"min ="<<min<<endl;
};
int main(){
    class op o;
    o.input();
    o.mmm();
    return 0;
}

class operate{
    private:
    int c,d,k;
    public:
    void input();
    void mmm();
};

void operate :: input(){
    cout<<"enter the value of c , d ,k\n:";
    cin>>c>>d>>k;
}

void operate :: mmm(){
    int max,mid,min;
    if(c>d && c>k){
        max = c;
        mid = (d>k)?d:k;
        min = (d<k)?d:k;
    }
    else if(d>c && d>k){
        max = d;
        mid = (c>k)?c:k;
        min = (c<k)?c:k;
    }
    else{
        max = k;
        mid = (c>d)?c:d;
        min = (c<d)?c:d;
    }
    cout<<"max = "<<max<<endl;
    cout<<"mid = "<<mid<<endl;
    cout<<"min = "<<min<<endl;
}
int main(){
    class operate p;
    p.input();
    p.mmm();

    return 0;
}