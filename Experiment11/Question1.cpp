// objective => write program to understand function templates and class templates
// question => wap in C++ find max of two different numbers using function templates
#include<iostream>
using namespace std;
#include<typeinfo>
template <typename T>
T maxz(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int x, y;
    float f1, f2;
    char ch1, ch2;

    cout << "Enter two integers:\n";
    cin >> x >> y;

    cout << "Enter two float values:\n";
    cin >> f1 >> f2;

    cout << "Enter two characters:\n";
    cin >> ch1 >> ch2;

    cout << "Max integer = " << maxz(x, y) << endl;
    cout << "Max float = " << maxz(f1, f2) << endl;
    cout << "Max character = " << maxz(ch1, ch2) << endl;

    return 0;
}