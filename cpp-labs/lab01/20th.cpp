#include <iostream>
using namespace std;

int main(){
    char letter;
    unsigned int num;
    cin >> letter >> num;
    if(char(int(letter)+num) > 122){
        cout << char(96+num) << endl;
    }
    else{
        cout << char(int(letter)+num) << endl;
    };
    
    return 0;
}