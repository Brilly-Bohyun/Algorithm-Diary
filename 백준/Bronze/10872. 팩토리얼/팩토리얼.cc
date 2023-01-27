#include<iostream>
using namespace std;

int factorial(int num){
    if (num <= 1)
        return 1;
    
    return num * factorial(num-1);
}

int main(){
    int a, answer = 0;
    cin >> a;
    
    answer = factorial(a);
    
    cout << answer;
}