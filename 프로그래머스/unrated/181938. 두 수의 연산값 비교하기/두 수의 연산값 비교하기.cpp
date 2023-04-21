#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string ca = to_string(a);
    string ba = to_string(b);
    
    string da = ca + ba;
    int fanswer = stoi(da);
    int sanswer = 2 * a * b;
    
    if(fanswer >= sanswer){
        answer = fanswer;
    } else {
        answer = sanswer;
    }
    
    
    return answer;
}