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
//		s[i] = s[i - 1] + a[i];//ǰ׺������
//	}
//
//	int cnt = 0;
//	for (int l = 1; l <= n; l++)//ö����ߵ�ǰ׺������
//	{
//		int r = l;
//		while (r <= n)//ö���ұߵ�ǰ׺������
//		{
//			int tmp = (s[r] - s[l - 1]);
//			if (tmp % k == 0)//�����������k�ı�����cnt��++
//				cnt++;
//			r++;
//		}
//	}
//	cout << cnt << endl;
//	return 0;
//}