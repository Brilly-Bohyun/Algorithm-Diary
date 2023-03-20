#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    vector<int> canswer;
    
    for(int i = 0; i < absolutes.size(); i++){
        if(signs[i] == true){
            canswer.push_back(absolutes[i]);
        } else if(signs[i] != true){
            canswer.push_back(absolutes[i] * -1);
        }
    }
    
    for(int i = 0; i < canswer.size(); i++){
        answer += canswer[i];
    }
    
    return answer;
}