#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string myString) {
    string answer = "";
    
    for(int i = 0; i < myString.size(); i++){
        if(myString[i] == 'a' || myString[i] == 'A'){
            answer += 'A';
        } else {
            answer += tolower(myString[i]);
        }
    }
    
    return answer;
}