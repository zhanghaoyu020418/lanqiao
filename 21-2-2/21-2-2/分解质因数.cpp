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
			if (num == 1)//�ѵ�1���ж��Ƿ��ȥ
				break;
		}
		if (isprime(num))//�ѵ�2��������һλ������ֱ�ӳ�ȥ
		{
			printf("%d\n", num);
			return 0;
		}
	}
	return 0;
}