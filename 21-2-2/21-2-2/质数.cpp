#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cmath>
using namespace std;

int arr[100];

int main()
{
	int n;
	scanf("%d", &n);
	int cnt = 0;

	for (int num = 2; num < n; num++)
	{
		int flag = 1;
		for (int j = 2; j <= sqrt(num); j++)
		{
			if (num % j == 0)
				flag = 0;
		}
		if (flag)
		{
			arr[cnt] = num;
			cnt++;
		}
	}
	cout << cnt << endl;

	for (int i = 0; i < cnt; i++)
	{
		cout << arr[i] <<  " ";
	}

	return 0;
}

