//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//const int N = 105;
//char a[N], b[N];
//char c[N];
//int n = 0;
//
//
//int main()
//{
//	int i = 0;
//	while ((a[i]= getchar()) != '\n')
//	{
//		i++;
//	}
//
//	int j = 0;
//	while ((b[i]= getchar()) != '\n')
//	{
//		j++;
//	}
//
//
//	while (i >= 0 && j >= 0)
//	{
//		c[n] = (a[i] + b[j]) % 10;
//		if (a[i] + b[j] - 2 * '0' >= 10)
//		{
//			n++;
//			c[n] += 1;
//		}
//		i--; j--;
//	}
//
//	if (i >= 0)
//		c[++n] = a[++i];
//	else
//		c[++n] = b[++j];
//
//
//
//
//	return 0;
//}