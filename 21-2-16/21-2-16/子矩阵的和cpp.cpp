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
////���治��ǰ׺�;��󣬶���ǰn�����ֵĺͣ����һάǰ׺�Ͳ�ͬ
//
//#include <iostream>
//#include <cstdio>
//
//using namespace std;
//
//int n, m;
//int q;
//int a[1010][1010]; //ԭ����
//int s[1010][1010]; //ǰ׺������
//
//int main()
//{
//	cin >> n >> m >> q;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			scanf("%d", &a[i][j]);
//			s[i][j] = s[i][j - 1] + s[i - 1][j] - s[i - 1][j - 1] + a[i][j];//ǰ׺�Ͼ���,��(i,j)��������(1��1)�м������֮��
//		}
//	}
//
//	while (q--)
//	{
//		int x1, x2, y1, y2;
//		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
//		printf("%d\n", s[x2][y2] - s[x2][y1 - 1] - s[x1 - 1][y2] + s[x1 - 1][y1 - 1]);//�Ӿ���ĺ�,(x1,y1)��(x2,y2)֮�����ֵĺ�
//	}
//
//	return 0;
//}
