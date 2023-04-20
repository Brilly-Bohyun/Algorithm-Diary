#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    if(n % 2 != 0){
        for(int i = 0; i <=n; i++){
            if(i % 2 != 0){
                answer += i;
            }
        }
    } else {
        for(int j = 0; j <= n; j++){
            if(j % 2 == 0){
                answer += pow(j, 2);
            }
        }
    }
    
    return answer;
}