// question => wap in c++ using constant data member in a class(circle)
#include <iostream>
using namespace std;
class circle{
    private:
    const double radius;
    public:
    circle(double r):radius(r){}
    double area() const{
        return 3.14*radius*radius;
    }
    double getradius() const{
        return radius;
    }
};
int main(){
    circle c(10.5);
    cout<<"Radius of circle = "<<c.getradius()<<endl;
    cout<<"Area of circle = "<<c.area()<<endl;
    return 0;
}