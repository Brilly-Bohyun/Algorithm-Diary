#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    int score[n] = {};
    double max = 0;
    double result;
    
    for(int i = 0; i < n; i++){
        cin >> score[i];
        if(score[i] > max)
            max = score[i];
        result += score[i];
    }
    result = (result / max * 100) / n;
    cout << result << "\n";
}