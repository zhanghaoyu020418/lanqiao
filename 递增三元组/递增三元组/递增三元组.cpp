#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

typedef long long LL;
const int N = 100010;
int n;
int a[N], b[N], c[N];
int acnt[N], ccnt[N];

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	for (int i = 1; i <= n; i++) scanf("%d", &b[i]);
	for (int i = 1; i <= n; i++) scanf("%d", &c[i]);

	//二分查找a数组
	sort(a, a + n);
	for (int i = 1; i <= n; i++)
	{
		int l = 1, r = n;
		while (l < r)
		{
			int mid = l + r >> 1;
			if (a[mid] >= b[i])
				r = mid;
			if (a[mid] < b[i])
				l = mid + 1;
		}
		if (a[l] == b[i])//最后一个数就是b[i],因为是下边界，所以直接-1
			acnt[i] = l - 1;
		else if (a[l] > b[i])//最后一个数比b[i]大,直接-1
			acnt[i] = l - 1;
		else//最后一个数比b[i]小,那就是整个数组的数字
			acnt[i] = l;

	}

	//二分查找b数组
	sort(c, c + n);
	for (int i = 1; i <= n; i++)
	{
		int l = 1, r = n;
		while (l < r)
		{
			int mid = l + r + 1 >> 1;
			if (c[mid] <= b[i])
				l = mid;
			if (c[mid] > b[i])
				r = mid - 1;
		}
		ccnt[i] = n - r;
	}

	long long  res = 0;
	for (int i = 1; i <= n; i++) {
		cout << acnt[i] << " " << ccnt[i] << endl;
		res += (LL)acnt[i] * (LL)ccnt[i];
	}
	cout << res << endl;

	return 0;
}