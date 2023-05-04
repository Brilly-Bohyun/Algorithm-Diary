#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0, sum = 0, mul =1;
    
    if(num_list.size() >= 11){
        for(int i = 0; i < num_list.size(); i++){
            sum += num_list[i];
        }
        answer = sum;
    } else{
        for(int j = 0; j < num_list.size(); j++){
            mul *= num_list[j];
        }
        answer = mul;
    }
    
    return answer;
}