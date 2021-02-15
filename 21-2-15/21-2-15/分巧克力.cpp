#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;

const int N = 100010;
int n, k;
int h[N], w[N];

bool check(int side)
{
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		cnt += (h[i] / side) * (w[i] / side);
		if (cnt >= k)
			return true;
	}
	return false;
}

int main()
{
	cin >> n >> k;
	for (int i = 0; i < n; i++) scanf("%d%d", &h[i], &w[i]);
	int l = 1, r = 1e5;
	while (l < r)
	{
		int mid = r + l + 1 >> 1;
		if (check(mid))
			l = mid;
		else
			r = mid - 1;
	}
	cout << l << endl;
	return 0;
}
