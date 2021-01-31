#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
int main()
{
	long long n, result = 1, temp = 0;
	cin >> n;
	while (n != 1)
	{
		for (long long i = 2; i <= n; i++)
		{
			if (n % i == 0)
			{
				if (i != temp)
				{
					result *= i;
					temp = i;
				}
				n = n / i;
				break;
			}
		}
	}
	cout << result << endl;
	return 0;
}