#include<iostream>
using namespace std;

int main(){
    int x, n, a, b, price=0;
    cin >> x;
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> a >> b;
        price += a*b;
    }
    
    if (price == x){
        cout << "Yes";
    } else{
        cout << "No";
    }
}