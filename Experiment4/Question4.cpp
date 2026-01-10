// question => wap at different data values using concept of function overloading
#include <iostream>
using namespace std;
int main(){
    void show(int);
    void show(float);
    void show(char*);
    int x = 10;
    float y = 10.5;
    char ch = 'c';
    char *s = "abc";
    show(x);
    show(y);
    show(ch);
    show(s);
    return 0;
}
void show(int x){
    cout<<"Integer : "<<x<<endl;
}
void show(float y){
    cout<<"Float : "<<y<<endl;
}
void show(char ch){
    cout<<"Char : "<<ch<<endl;
}
void show(char *s){
    cout<<"String : "<<s<<endl;
}

int main(){
    void show(int);
    void show(float);
    void show(char);
    void show(string);
    int x = 10;
    float y = 12.9;
    char ch = 'l';
    string  s ="lakshya";
    show(x);
    show(y);
    show(ch);
    show(s);

    return 0;
}
void show(int x){
    cout<<"integer = "<<x<<endl;
}
void show(float y){
    cout<<"float = "<<y<<endl;
}
void show(char ch){
    cout<<"character = "<<ch<<endl;
}
void show(string s){
    cout<<"string = "<<s<<endl;
}