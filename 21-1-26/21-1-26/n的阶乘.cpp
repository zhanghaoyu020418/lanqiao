#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;

const int N = 1010;
long long a[N] = { 1 };

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		a[i] = a[i - 1] * i;
	}

	cout << a[n] << endl;

	return 0;
}

//  265252859812191058636308480000000
