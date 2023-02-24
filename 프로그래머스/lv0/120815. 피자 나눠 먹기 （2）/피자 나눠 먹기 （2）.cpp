#include <string>
#include <vector>

using namespace std;


int gcd(int a, int b){
    int n;
    
    while ( b!= 0){
        n = a % b;
        a = b;
        b = n;
    }
    
    return a;
}

int solution(int n) {
    int answer = 0;
    
    int pizza = n * 6 / gcd(n, 6);
    answer = pizza / 6;
    
    return answer;
}
