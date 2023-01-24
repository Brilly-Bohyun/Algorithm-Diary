#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a, b, c;
    cin >> a;
    
    for(int i = 0; i < a; i++){
        cin >> b >> c;
        cout << b+c << "\n";
    }
}