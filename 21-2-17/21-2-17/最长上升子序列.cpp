#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 1010;
int w[N];
int dp[N];
int n;

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> w[i];

	for (int i = 1; i <= n; i++)
	{
		dp[i] = 1;//Ĭ��û�����������У�ֻ�е�i�����Լ�
		for (int j = 1; j < i; j++)
			if (w[j] < w[i])    //ֻ����w[i] > a[j]��ʱ�򣬲ſ���������������
				dp[i] = max(dp[i], dp[j] + 1);
	}

	int res = 0;
	for (int i = 1; i <= n; i++)
		res = max(res, dp[i]);
	cout << res << endl;
	return 0;
}

