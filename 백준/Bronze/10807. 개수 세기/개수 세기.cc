#include<iostream>
using namespace std;

int main(){
    int a, c, count = 0;
    cin >> a;
    int* b = new int[a];
    for (int i = 0; i < a; i++){
        cin >> b[i];
    }
    
    cin >> c;
    for (int i = 0; i < a; i++){
        if(b[i] == c){
            count++;
        }
    }
    cout << count;
}