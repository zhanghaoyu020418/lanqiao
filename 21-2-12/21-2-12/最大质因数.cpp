//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int arr[2501];
//
//bool primenum(int num)
//{
//	for (int i = 2; i <= sqrt(num); i++)
//	{
//		if (num % i == 0)
//			return false;
//	}
//	return true;
//}
//
//int main()
//{
//	int N = 0;
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> arr[i];
//	}
//
//	int max = arr[0];
//	int MaxFP = 0;//比较质因数
//	int PFN = 0;//质因数
//	int MAX = 0;//最大质因数
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 1; j < arr[i]; j++)
//		{
//			int numf = arr[i] % j;//求出num的因数
//			if (numf == 0)
//				if (primenum(j))
//				{
//					PFN = j;
//				}
//		}
//		if (PFN > MaxFP)
//		{
//			MaxFP = PFN;
//			MAX = arr[i];
//		}
//	}
//
//	cout << MAX << endl;
//
//	return 0;
//}
//
