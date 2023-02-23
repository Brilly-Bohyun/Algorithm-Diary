#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    double sqrtValue = sqrt(n);
    int compareValue = (int)sqrtValue;
    
    if(sqrtValue == compareValue){
        answer = 1;
    } else {
        answer = 2;
    }
    
    return answer;
}