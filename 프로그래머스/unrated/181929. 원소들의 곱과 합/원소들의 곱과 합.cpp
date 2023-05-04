#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int sum = 0;
    int mul = 1;
    int square = 0;
    
    for(int i = 0; i < num_list.size(); i++){
        sum += num_list[i];
        mul *= num_list[i];
    }
    
    square = pow(sum, 2);
    
    if(mul < square){
        answer = 1;
    } else {
        answer = 0;
    }
    
    return answer;
}