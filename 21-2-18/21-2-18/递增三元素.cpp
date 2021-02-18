#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

typedef long long LL;
const int N = 100010;
int n;
int a[N], b[N], c[N];//原数组
int cnt[N];//存数字出现次数
int s[N];//数字出现次数前缀和数组
int as[N], cs[N];//小于bj的数字出现次数数组和大于bj数字出现次数数组


int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		a[i] ++;//因为前缀和数组是从1开始，所以a[i]++这样就不用处理i=0的情况了
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &b[i]);
		b[i] ++;
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &c[i]);
		c[i] ++;
	}

	//统计数字出现的个数
	for (int i = 0; i < n; i++) cnt[a[i]] ++;
	for (int i = 1; i < N; i++) s[i] = s[i - 1] + cnt[i];
	for (int i = 0; i < n; i++) as[i] = s[b[i] - 1];

	//清空前缀和数组
	memset(cnt, 0, sizeof cnt);
	memset(s, 0, sizeof s);

	for (int i = 0; i < n; i++) cnt[c[i]] ++;
	for (int i = 1; i < N; i++) s[i] = s[i - 1] + cnt[i];
	for (int i = 0; i < n; i++) cs[i] = s[N - 1] - s[b[i]];

	LL res = 0;
	//枚举b数组
	for (int i = 0; i < n; i++)
	{
		res += (LL)as[i] * (LL)cs[i];
	}

	cout << res << endl;

	return 0;
}