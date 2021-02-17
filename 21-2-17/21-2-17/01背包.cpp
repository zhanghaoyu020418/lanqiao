#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 1010;
int n, m;
int v[N], w[N];
int dp[N][N];

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> v[i] >> w[i];

	//dp
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= m; j++)
		{
			dp[i][j] = dp[i - 1][j];
			if (j >= v[i])
				dp[i][j] = max(dp[i][j], dp[i - 1][j - v[i]] + w[i]);
		}
	}
	cout << dp[n][m] << endl;
	return 0;
}