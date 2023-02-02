#include<iostream>
using namespace std;

// Grid Algorithm
int main(){
    int n, k, sum = 0;
    int arr[11] = {};
    
    cin >> n >> k;
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    for(int i = n-1; i >=0; i--){
        sum += k/arr[i];
        k %= arr[i];
    }
    
    cout << sum << "\n";
}