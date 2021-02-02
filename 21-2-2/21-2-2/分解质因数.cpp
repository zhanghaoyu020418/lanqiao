#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cmath>
using namespace std;

inline bool isprime(int n)
{
	for (int i = 2; i < sqrt(n); i++)
	{
		if (n % i == 0)
			return 0;
	}

	return 1;
}

int main()
{
	int input;
	cin >> input;

	if (isprime(input))
	{
		printf("%d\n", input);
		return 0;
	}

	int num = input;
	for (int i = 2; i <= input / 2; i++)
	{

		if (num % i == 0)
		{
			while (num % i == 0)
			{
				printf("%d ", i);
				num /= i;
			}
			if (num == 1)//难点1：判断是否出去
				break;
		}
		if (isprime(num))//难点2：如果最后一位是素数直接出去
		{
			printf("%d\n", num);
			return 0;
		}
	}
	return 0;
}