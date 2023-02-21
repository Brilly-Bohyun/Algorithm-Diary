#include<iostream>
#include<algorithm>
using namespace std;

int arr[10001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a , i, temp;
    cin >> a;
    
    for(i = 0; i < a; i++){
        cin >> temp;
        arr[temp]++;
    }
    
    for(int i =1; i < 10001; i++){
        for(int j = 0; j < arr[i]; j++){
            cout << i << "\n";
        }
    }
    return 0;
}