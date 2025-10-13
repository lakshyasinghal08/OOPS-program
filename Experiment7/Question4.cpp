// question => wap in c++ using constant data member in the class rectangle
#include <iostream>
using namespace std;
class rectangle{
    private:
    const double length;
    const double width;
    public:
    rectangle(double l, double b):length(l), width(b){}
    double area() const{
        return length*width;
    }
};
int main(){
    rectangle r(10.5, 5.5);
    cout<<"Area of rectangle = "<<r.area()<<endl;
    return 0;
}