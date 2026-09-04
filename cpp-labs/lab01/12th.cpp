#include <iostream>

#include <iomanip>  

using namespace std;

int main(){
    double Celsius;
    cin >> Celsius;
    double Fahrenheit = Celsius * 9/5 + 32;
    cout << fixed << setprecision(6) << Fahrenheit << endl;

    return 0;
}