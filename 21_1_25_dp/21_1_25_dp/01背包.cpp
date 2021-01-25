#define _CRT_SECURE_NO_WARNINGS 1

/*
问题描述
　　给定N个物品,每个物品有一个重量W和一个价值V.你有一个能装M重量的背包.问怎么装使得所装价值最大.每个物品只有一个.
输入格式
　　输入的第一行包含两个整数n, m，分别表示物品的个数和背包能装重量。
　　以后N行每行两个数Wi和Vi,表示物品的重量和价值
输出格式
　　输出1行，包含一个整数，表示最大价值
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



//优化空间后的解法


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