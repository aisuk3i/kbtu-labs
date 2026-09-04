#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    const double pi = 3.14159265358979;
    double radius;
    cin >> radius;
    double area = pi*pow(radius, 2);
    double circumference = 2*pi*radius;
    cout << fixed << setprecision(6) << area << ' ' << circumference << endl;

    return 0;
}