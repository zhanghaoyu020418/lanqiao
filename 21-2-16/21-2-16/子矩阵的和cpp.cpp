//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//int n, m;
//int q;
//int a[1010][1010];
//int s[1010][1010];
//
//
//int main()
//{
//	cin >> n >> m >> q;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//
//	int i = 0, j = 0;
//
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= m; j++)
//		{
//			if (j == 1)
//				s[i][j] = s[i - 1][m] + a[i][j];
//			else
//				s[i][j] = s[i][j - 1] + a[i][j];
//		}
//	}
//
//	while (q--)
//	{
//		int x1, x2, y1, y2;
//		cin >> x1 >> y1 >> x2 >> y2;
//		cout << s[x2][y2] - s[x1][y1 - 1] << endl;
//	}
//	return 0;
//}
////上面不是前缀和矩阵，而是前n个数字的和，这和一维前缀和不同
//
//#include <iostream>
//#include <cstdio>
//
//using namespace std;
//
//int n, m;
//int q;
//int a[1010][1010]; //原数组
//int s[1010][1010]; //前缀和数组
//
//int main()
//{
//	cin >> n >> m >> q;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			scanf("%d", &a[i][j]);
//			s[i][j] = s[i][j - 1] + s[i - 1][j] - s[i - 1][j - 1] + a[i][j];//前缀合矩阵,第(i,j)个数到底(1，1)中间的数字之和
//		}
//	}
//
//	while (q--)
//	{
//		int x1, x2, y1, y2;
//		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
//		printf("%d\n", s[x2][y2] - s[x2][y1 - 1] - s[x1 - 1][y2] + s[x1 - 1][y1 - 1]);//子矩阵的和,(x1,y1)到(x2,y2)之间数字的和
//	}
//
//	return 0;
//}
