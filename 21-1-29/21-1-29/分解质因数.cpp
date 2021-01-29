//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//const int N = 10000;
//int a, b;
//int arr[N];
//int index;
//
//bool isprime(int n)
//{
//	for (int i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	
//	return 1;
//}
//
//
//int main()
//{
//	cin >> a >> b;
//
//	for (int i = 2; i <= b; i++)  //筛选素数，并将其放到数组中保存起来
//	{
//		if (isprime(i))
//		{
//			arr[index] = i;
//			index++;
//		}
//	}
//
//	for (int i = a; i <= b; i++)
//	{
//		cout << i << "=";
//		int num = i;
//		for (int j = 0; j < index; j++)
//		{
//			while (num % arr[j] == 0)
//			{
//				num /= arr[j];
//				cout << arr[j];
//				if (num == 1)
//				{
//					cout << endl;
//					break;
//				}
//				else
//					cout << "*";
//			}
//		}
//	}
//
//	return 0;
//}