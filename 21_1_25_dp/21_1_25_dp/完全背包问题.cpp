#define _CRT_SECURE_NO_WARNINGS 1
/*
�� N ����Ʒ��һ�������� V �ı�����ÿ����Ʒ�������޼����á�

�� i ����Ʒ������� vi����ֵ�� wi��

��⽫��Щ��Ʒװ�뱳������ʹ��Щ��Ʒ��������������������������ܼ�ֵ���
�������ֵ��

�����ʽ
��һ������������N��V���ÿո�������ֱ��ʾ��Ʒ�����ͱ����ݻ���

�������� N �У�ÿ���������� vi,wi���ÿո�������ֱ��ʾ�� i ����Ʒ������ͼ�ֵ��

�����ʽ
���һ����������ʾ����ֵ��

���ݷ�Χ
0<N,V��1000
0<vi,wi��1000
*/
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 1010;
//
//int n, m;
//int f[N][N];
//int v[N], w[N];
//
//int main()
//{
//	cin >> n >> m;
//
//	for (int i = 1; i <= n; i++)
//		cin >> v[i] >> w[i];
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			f[i][j] = f[i - 1][j];
//			if (j >= v[i])
//				f[i][j] = max(f[i][j], f[i][j - v[i]] + w[i]);
//		}
//	}
//
//	cout << f[n][m] << endl;
//
//	return 0;
//}




//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 1010;
//
//int n, m;
//int f[N];
//int v[N], w[N];
//
//int main()
//{
//	cin >> n >> m;
//
//	for (int i = 1; i <= n; i++)
//		cin >> v[i] >> w[i];
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = v[i]; j <= m; j++)
//			f[j] = max(f[j], f[j - v[i]] + w[i]);
//	}
//
//	cout << f[m] << endl;
//
//	return 0;
//}