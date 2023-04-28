#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    vector<int> range;
    
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == 2){
            range.push_back(i);
        }
    }
    
    if(range.size() == 1){
        answer.push_back(2);
    } else if(range.size() == 0){
        answer.push_back(-1);
    } else {
        for(int j = range.front(); j <= range.back(); j++){
            answer.push_back(arr[j]);
        }
    }
    
    return answer;
}