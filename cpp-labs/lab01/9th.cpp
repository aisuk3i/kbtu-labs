#include <iostream>
using namespace std;

int main(){
    int h;
    int m;
    int t;
    cin >> h >> m >> t;
    int result = (h/m)*t;
    cout << result << endl;

    return 0;
}