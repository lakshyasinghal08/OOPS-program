// question => wap in c++ to print a car barnd and price
#include <iostream>
using namespace std;
class car{
    private:
    string brand;
    int price;
    public:
    car(string b , int p){
        brand = "B.M.W";
        price = 10000000;
    }
    void display(){
        cout<<"Brand = "<<brand<<endl;
        cout<<"Price = "<<price<<endl;
    }
};
int main(){
    car c1("B.M.W" , 10000000);
    c1.display();
    return 0;
}