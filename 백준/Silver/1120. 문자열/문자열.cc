#include <iostream>
#include <string>
#include <climits>
#include <algorithm>

using namespace std;

int main() {
    string a, b;
    
    cin >> a >> b;
    
    int lengthA = a.size();
    int lengthB = b.size();
    
    int numToAdd = lengthB - lengthA;
    
    int m = INT_MAX;
    
    for(int i = 0; i < numToAdd + 1; i++){
        int cnt = 0;
        
        for(int j = 0; j < lengthA; j++){
            if(a[j] != b[i+j]){
                cnt++;
            }
        }
        m = min(cnt, m);
    }
    cout << m;
    
    return 0;
}