#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 510;
int n, m;
int s[N][N];

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> s[i][j];
			s[i][j] += s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1];//Ç°×ººÍ¾ØÕó
		}
	}

	n = max(n, m);
	int ret = 0;
	for (int x2 = 1; x2 <= n; x2++)
	{
		for (int y2 = 1; y2 <= n; y2++)
		{
			for (int x1 = 0; x1 <= x2 - 1; x1++)
			{
				for (int y1 = 0; y1 <= y2 - 1; y1++)
				{
					ret = max(ret, s[x2][y2] - s[x2][y1] - s[x1][y2] + s[x1][y1]);
				}
			}
		}
	}

	cout << ret << endl;
	return 0;
}