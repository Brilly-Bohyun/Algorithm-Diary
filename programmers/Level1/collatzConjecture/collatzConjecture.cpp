#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    /*
    result를 int로 하였더니 626331의 경우 계산 중에 int 자료형의 범위를 초과하여
    long 형으로 바꿔주었다
    */
    long result = num;

    while (answer != 501) {
        while (result != 1) {
            if (result % 2 == 0) {
                result = result / 2;
                answer++;
            }
            else {
                result = result * 3 + 1;
                answer++;
            }
        }
        break;
    }
    if (answer > 500)
        answer = -1;

    return answer;
}