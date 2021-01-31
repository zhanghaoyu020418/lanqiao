//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//inline bool isprime(unsigned long n)
//{
//	for (unsigned int i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//
//int main()
//{
//	unsigned long input;
//	cin >> input;
//
//	if (isprime(input))
//	{
//		cout << input << endl;
//		return 0;
//	}
//
//	unsigned long ret = 0;
//	unsigned long ans = 1;
//
//	for (unsigned int i = 2; i <= input / 2; i++)
//	{
//		if (input % i == 0)
//		{
//			while (input % i == 0)
//			{
//				if (i != ret)
//				{
//					ret = i;
//					ans *= ret;
//				}
//				input /= i;
//			}
//		}
//		if (isprime(input))
//		{
//			ans *= input;
//			break;
//		}
//	}
//
//	cout << ans << endl;
//
//	return 0;
//}
//
