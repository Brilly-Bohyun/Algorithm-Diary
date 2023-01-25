#include<iostream>
using namespace std;

int main(){
    int a, total = 0;
    cin >> a;
    
    char b;
    
    for(int i=0; i<a; i++){
        cin >> b;
        total += (b-'0');
    }
    
    cout << total << endl;
}