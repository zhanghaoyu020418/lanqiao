#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//const int MAX = 1000;
//
//int a[MAX];
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> a[i];
//	}
//
//	int left = 0;
//	int right = N - 1;
//
//
//	for (int i = 0; i < N - 1; i++)
//	{
//		for (int j = 0; j < N - 1 - i; j++)
//		{
//			if (a[j] < a[j + 1])
//			{
//				int tmp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = tmp;
//			}
//		}
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}