#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;	//약수의 개수
	cin >> n;
	int* arr = new int[n];	//약수를 입력받을 배열

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + n);	//오름차순으로 정렬

	cout << arr[0] * arr[n - 1] << '\n';	//진짜약수의 최솟값 * 최댓값은 진짜약수를 가지는 N을 구할 수 있다.


	delete[] arr;
	return 0;
}