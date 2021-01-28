#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;

int lcm(int n, int m)
{
	int a = n;
	int b = m;

	int ret;

	while (ret = n % m)
	{
		n = m;
		m = ret;
	}


	return a * b / m;
}


int main()
{
	int n, m;

	cin >> n >> m;

	int ans = lcm(n, m);

	cout << ans << endl;

	return 0;
}