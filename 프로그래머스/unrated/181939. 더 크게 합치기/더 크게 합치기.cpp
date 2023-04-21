#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string sa = to_string(a);
    string sb = to_string(b);
    
    int fnum = stoi(sa + sb);
    int snum = stoi(sb + sa);
    
    if(fnum > snum){
        answer = fnum;
    } else {
        answer = snum;
    }
    
    return answer;
}