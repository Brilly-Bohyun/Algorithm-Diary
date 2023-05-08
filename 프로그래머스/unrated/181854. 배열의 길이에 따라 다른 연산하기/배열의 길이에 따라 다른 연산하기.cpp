#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer;
    
    int length = arr.size();
    
    if(length % 2 == 0){
        for(int i = 0; i < arr.size(); i++){
            if(i % 2 != 0){
                answer.push_back(arr[i] + n);
            } else {
                answer.push_back(arr[i]);
            }
        }
    } else {
        for(int j = 0; j < arr.size(); j++){
            if(j % 2 == 0){
                answer.push_back(arr[j] + n);
            } else {
                answer.push_back(arr[j]);
            }
        }
    }
    
    return answer;
}