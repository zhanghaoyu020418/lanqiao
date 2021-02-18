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

	for (int i = 0; i < n; i++)//ö��������˵�
	{
		int maxv = -INF;//ÿ�θ�����������ֵ����Сֵ
		int minv = INF;
		for (int j = i; j < n; j++)//ö�������Ҷ˵�
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