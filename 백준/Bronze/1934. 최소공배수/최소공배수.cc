#include<iostream>
using namespace std;

int lcm(int a, int b){
    if ( b == 0) return a;
    else return lcm(b, a % b);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t, a, b;
    cin >> t;
    
    for (int i = 0; i < t; i++){
        cin >> a >> b;
        cout << a * b / lcm(a, b) << "\n";
    }
    
    return 0;
}