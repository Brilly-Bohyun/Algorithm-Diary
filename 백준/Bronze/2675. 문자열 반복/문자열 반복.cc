#include<iostream>
#include<string>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int repeat;
    cin >> repeat;
    
    for(int i = 0; i < repeat; i++){
        int cnt;
        string str;
        cin >> cnt;
        cin >> str;
        
        for(int j = 0; j < str.length(); j++){
            for(int k = 0; k < cnt; k++){
                cout << str[j];
            }
        }
        cout << "\n";
    }
}