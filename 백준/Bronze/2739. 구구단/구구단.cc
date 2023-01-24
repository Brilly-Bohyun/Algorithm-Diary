#include<iostream>
using namespace std;

int main(){
    int a, b, answer;
    cin >> a;
    
    for(b=1; b < 10; b++){
        answer = a*b;
        cout << a << " * " << b << " = " << answer << endl;
    }
}