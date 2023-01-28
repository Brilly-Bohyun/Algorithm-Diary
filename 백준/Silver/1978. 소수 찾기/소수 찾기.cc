#include<iostream>
using namespace std;

int main(){
    int n, temp, cnt = 0, result = 0;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> temp;
        for ( int x = 1; x <= temp; x++){
            if(temp%x == 0)
                cnt++;
        }
        if(cnt == 2)
            result++;
        cnt = 0;
    }
    cout << result << "\n";
}