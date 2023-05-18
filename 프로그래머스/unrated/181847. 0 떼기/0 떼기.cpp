#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    string answer = "";
    int front_not_zero_pos = -1;
    
    front_not_zero_pos = n_str.find_first_not_of('0');
    if(front_not_zero_pos != 0){
        n_str.erase(0, front_not_zero_pos);
    }
    
    for(int i = 0; i < n_str.size(); i++){
        answer += n_str[i];
    }
    
    return answer;
}