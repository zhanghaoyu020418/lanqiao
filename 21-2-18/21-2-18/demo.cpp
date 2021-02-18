#include <iostream>
#include <algorithm>

using namespace std;

const int N = 10010, INF = 1e8;
int n;
int a[N];
int res;

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for (int i = 0; i < n; i++)//枚举区间左端点
	{
		int maxv = -INF;//每次更新区间的最大值和最小值
		int minv = INF;
		for (int j = i; j < n; j++)//枚举区间右端点
		{
			maxv = max(maxv, a[j]);
			minv = min(minv, a[j]);
			if (maxv - minv == j - i)
				res++;
		}
	}

	cout << res << endl;
	return 0;
}