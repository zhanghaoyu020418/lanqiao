#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

const int N = 110;
int cnt;
int r, c;
int dp[N][N];
int a[N][N];

int main()
{
	cin >> cnt;
	while (cnt--)
	{
		//ԭ����¼������
		cin >> r >> c;
		for (int i = 1; i <= r; i++)
		{
			for (int j = 1; j <= c; j++)
			{
				cin >> a[i][j];
			}
		}

		//dp,ö�����д�(1, 1)��(i, j)��·���ϵ����ֵ
		for (int i = 1; i <= r; i++)
		{
			for (int j = 1; j <= c; j++)
			{
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + a[i][j];
			}
		}

		cout << dp[r][c] << endl;
	}




	return 0;
}
