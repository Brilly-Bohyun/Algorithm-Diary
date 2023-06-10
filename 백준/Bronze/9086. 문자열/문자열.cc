#include <iostream>
using namespace std;

int main(){
    int i;
    string str;
    cin >> i;
    
    for(int j = 0; j < i; j++){
        cin >> str;
        cout << str[0] << str[str.length() - 1] << '\n';
    }
}