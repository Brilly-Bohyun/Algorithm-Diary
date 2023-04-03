#include <string>
#include <vector>
#include <algorithm>

    using namespace std;

    vector<int> solution(int n) {
        vector<int> yaksu;

        for(int i=2; i<=n; ){
            if(n%i == 0){
                yaksu.push_back(i);
                n /= i;
                i = 2;
            }
            
            else
                i++;
        }   
        
        // 중복 제거
        yaksu.erase(unique(yaksu.begin(), yaksu.end()), yaksu.end());
        
        return yaksu;
    }