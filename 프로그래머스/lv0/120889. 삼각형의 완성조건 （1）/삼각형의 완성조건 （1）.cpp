#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    
    sort(sides.begin(), sides.end());
    int compare = sides[0] + sides[1];
    
    if (sides[2] < compare){
        answer = 1;
    } else {
        answer = 2;
    }
    
    return answer;
}