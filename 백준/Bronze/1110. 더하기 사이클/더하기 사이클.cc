#include<iostream>
using namespace std;

int main(){
    int init, temp, n, cnt = 0;
    cin >> n;
    init = n;
    
    do {
        temp = (n % 10) * 10 + (n / 10 + n % 10) % 10;
        cnt++;
        n = temp;
    } while (temp != init);
    
    cout << cnt << "\n";
    
    return 0;
}