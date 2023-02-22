#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    
    sort(array.begin(), array.end());
    
    if(array.size() % 2 != 0){
        answer = array[array.size() / 2];
    } else {
        answer = (array[array.size() / 2] + array[array.size() / 2 + 1]) / 2;
    }
    
    return answer;
}