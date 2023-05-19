#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int s, int e) {
    string answer = "";
    
    for(int i = 0; i < s; i++){
        answer.push_back(my_string[i]);
    }
    
    for(int j = e; j >= s; j--){
        answer.push_back(my_string[j]);
    }
    
    for(int x = e+1; x < my_string.size(); x++){
        answer.push_back(my_string[x]);
    }
    
    return answer;
}