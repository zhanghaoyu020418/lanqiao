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

	//���ֲ���a����
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
		if (a[l] == b[i])//���һ��������b[i],��Ϊ���±߽磬����ֱ��-1
			acnt[i] = l - 1;
		else if (a[l] > b[i])//���һ������b[i]��,ֱ��-1
			acnt[i] = l - 1;
		else//���һ������b[i]С,�Ǿ����������������
			acnt[i] = l;

	}

	//���ֲ���b����
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