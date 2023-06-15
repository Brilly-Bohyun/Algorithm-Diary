#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count[26] = {0, };
    
    for ( int i = 0; i < n; i++ ) {
        string player;
        cin >> player;
        count[player[0] - 'a']++;
    }
    
    int predaja = 1;
    for ( int i = 0; i < 26; i++ ) {
        if ( count[i] >= 5 ) {
            cout << (char)(i + 'a');
            predaja = 0;
        }
    }
    if ( predaja == 1 )
        cout << "PREDAJA";
}