#include <iostream>
#include <iomanip>  

using namespace std;

int main(){
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    double mean = (a+b+(double)c)/3;
    cout << fixed << setprecision(6) <<  mean << endl;

    return 0;
}