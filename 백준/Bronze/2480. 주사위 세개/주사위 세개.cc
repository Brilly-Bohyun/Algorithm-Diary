#include<iostream>
using namespace std;

int main(){
    int a, b, c, first = 0, second = 0, third = 0, total = 0;
    cin >> a >> b >> c;
    
    if(a==b && a==c){
        first = 10000+(a*1000);
    } else if(b==c){
        second = 1000+(b*100);
    } else if(a==b){
        second = 1000+(a*100);
    } else if(a==c){
        second = 1000+(c*100);
    } else {
        if(a > b && a > c){
            third = a*100;
        } else if (b > a && b > c){
            third = b *100;
        } else {
            third = c * 100;
        }
    }
    
    total = first + second + third;
    cout << total;
}