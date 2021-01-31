//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//inline bool isprime(int n)
//{
//	for (int i = 2; i < sqrt(n); i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//
//	return 1;
//}
//
//int main()
//{
//	int input;
//	cin >> input;
//
//	if (isprime(input))         //如果是素数直接输出，这样就不用多余的计算了
//	{
//		printf("%d\n", input);
//		return 0;
//	}
//
//	int num = input;
//	for (int i = 2; i <= input / 2; i++)
//	{
//		if (isprime(i))
//		{
//
//
//			//这一步是找出所有质因子的关键，找出素数后，判断是否整除素数
//			if (num % i == 0)
//			{
//				while (num % i == 0)
//				{
//					printf("%d ", i);
//					num /= i;
//				}
//			}
//
//
//
//			if (isprime(num))
//			//如果最后一位是素数的话，就直接输出，否则会运行超时
//			{
//				printf("%d\n", num);
//				return 0;
//			}
//		}
//	}
//	return 0;
//}
////for (int i = 0; i < index; i++)
////{
////	if (input % a[i] == 0)
////	{
////		while ((input % a[i]) == 0)
////		{
////			printf("%d ", a[i]);
////			input /= a[i];
////		}
////		if (a[i] == 0)
////			break;
////	}
////}
//
//
//
//
////int a[10000000];
////int index;
////if (isprime(input))
////{
////	printf("%d\n", input);
////	return 0;
////}
//
//
////
////for (int i = 2; i < input; i++)
////{
////	if (isprime(i))
////	{
////		a[index++] = i;
////	}
////}