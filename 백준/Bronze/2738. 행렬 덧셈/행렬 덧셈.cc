#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n+1][m+1] = {};
    int b[n+1][m+1] = {};
    
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> a[i][j];
    
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> b[i][j];
    
    for(int i = 1; i <= n; i++){
        for(int j =1; j <=m; j++){
            cout << a[i][j] + b[i][j] << ' ';
        }
        cout << "\n";
    }
}