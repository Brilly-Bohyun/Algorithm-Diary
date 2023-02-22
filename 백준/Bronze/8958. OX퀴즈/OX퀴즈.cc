#include<iostream>
#include<string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num, score, cnt;
    string sentence;

    cin >> num;

    for (int i = 0; i < num; i++) {
        score = cnt = 0;
        cin >> sentence;
        
        for (int j = 0; j < sentence.size(); j++) {
            if (sentence[j] == 'O') {
                cnt++;
                score += cnt;
            }
            else {
                cnt = 0;
                continue;
            }
            
        }
        cout << score << "\n";
    }
    return 0;
}