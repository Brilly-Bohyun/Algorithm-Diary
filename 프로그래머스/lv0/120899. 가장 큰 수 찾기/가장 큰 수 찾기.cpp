#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    
    vector<int> carray = array;
    sort(array.rbegin(), array.rend());
    answer.push_back(array[0]);
    
    for(int i = 0; i < carray.size(); i++){
        if(carray[i] == array[0]){
        answer.push_back(i);
        }
    }
    
    return answer;
}