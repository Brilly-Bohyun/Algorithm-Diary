#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    /*
    result�� int�� �Ͽ����� 626331�� ��� ��� �߿� int �ڷ����� ������ �ʰ��Ͽ�
    long ������ �ٲ��־���
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