#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

typedef long long LL;
const int N = 100010;
int n;
int a[N], b[N], c[N];//ԭ����
int cnt[N];//�����ֳ��ִ���
int s[N];//���ֳ��ִ���ǰ׺������
int as[N], cs[N];//С��bj�����ֳ��ִ�������ʹ���bj���ֳ��ִ�������


int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		a[i] ++;//��Ϊǰ׺�������Ǵ�1��ʼ������a[i]++�����Ͳ��ô���i=0�������
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

	//ͳ�����ֳ��ֵĸ���
	for (int i = 0; i < n; i++) cnt[a[i]] ++;
	for (int i = 1; i < N; i++) s[i] = s[i - 1] + cnt[i];
	for (int i = 0; i < n; i++) as[i] = s[b[i] - 1];

	//���ǰ׺������
	memset(cnt, 0, sizeof cnt);
	memset(s, 0, sizeof s);

	for (int i = 0; i < n; i++) cnt[c[i]] ++;
	for (int i = 1; i < N; i++) s[i] = s[i - 1] + cnt[i];
	for (int i = 0; i < n; i++) cs[i] = s[N - 1] - s[b[i]];

	LL res = 0;
	//ö��b����
	for (int i = 0; i < n; i++)
	{
		res += (LL)as[i] * (LL)cs[i];
	}

	cout << res << endl;

	return 0;
}