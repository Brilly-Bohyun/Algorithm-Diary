#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n, m, x, y, a, result = 0;
    cin >> n >> m;
    int arr[n] = {};
    
    for(int i = 1; i <= n; i++){
        cin >> a;
        result += a;
        arr[i] = result;
    }
    
    for (int i = 0; i < m; i++){
        cin >> x >> y;
        cout << arr[y]-arr[x-1] << "\n";
    }
}