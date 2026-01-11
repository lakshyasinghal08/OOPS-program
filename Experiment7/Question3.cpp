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
class rect{
    private:
    const int length;
    const int breadth;
    public:
    rect(int l , int b):length(l) , breadth(b){}
    int area()const{
        return length * breadth;
    }
    int getlength()const{
        return length;
    }
    int getbreadth()const{
        return breadth;
    }
};
int main(){
    rect  r(2,6);
    cout<<"the area of the rectangle : "<<r.area()<<endl;
    cout<<"the value of the length = "<<r.getlength()<<endl;
    cout<<"the value of the side = "<<r.getbreadth()<<endl;
    return 0;
}