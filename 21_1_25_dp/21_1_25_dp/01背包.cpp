#define _CRT_SECURE_NO_WARNINGS 1

/*
��������
��������N����Ʒ,ÿ����Ʒ��һ������W��һ����ֵV.����һ����װM�����ı���.����ôװʹ����װ��ֵ���.ÿ����Ʒֻ��һ��.
�����ʽ
��������ĵ�һ�а�����������n, m���ֱ��ʾ��Ʒ�ĸ����ͱ�����װ������
�����Ժ�N��ÿ��������Wi��Vi,��ʾ��Ʒ�������ͼ�ֵ
�����ʽ
�������1�У�����һ����������ʾ����ֵ
*/

//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 5050;
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
//		cin >> w[i] >> v[i];
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			f[i][j] = f[i - 1][j];
//			if(j >= w[i])
//				f[i][j] = max(f[i][j], f[i - 1][j - w[i]] + v[i]);
//		}
//	}
//
//	cout << f[n][m] ;
//
//	return 0;
//}



//�Ż��ռ��Ľⷨ


//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 5050;
//
//int n, m;
//int f[N];
//int v[N], w[N];
//int main()
//{
//	cin >> n >> m;
//
//	for (int i = 1; i <= n; i++)
//		cin >> w[i] >> v[i];
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = m; j >= w[i]; j--)
//		{
//				f[j] = max(f[j], f[j - w[i]] + v[i]);
//		}
//	}
//
//	cout << f[m];
//
//	return 0;
//}