#include <iostream>

using namespace std;

int main(){
    int cpp;
    int py;
    int total;
    cin >> cpp >> py >> total;
    int both = (cpp+py) - total;
    cout << both << endl;

    return 0;
}