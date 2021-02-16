//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cstdio>
//
//using namespace std;
//
//const int N = 100010;
//int n, k;
//int a[N];
//int s[N];
//
//int main()
//{
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &a[i]);
//		s[i] = s[i - 1] + a[i];//前缀和数组
//	}
//
//	int cnt = 0;
//	for (int l = 1; l <= n; l++)//枚举左边的前缀和数组
//	{
//		int r = l;
//		while (r <= n)//枚举右边的前缀和数组
//		{
//			int tmp = (s[r] - s[l - 1]);
//			if (tmp % k == 0)//如果子序列是k的倍数，cnt就++
//				cnt++;
//			r++;
//		}
//	}
//	cout << cnt << endl;
//	return 0;
//}