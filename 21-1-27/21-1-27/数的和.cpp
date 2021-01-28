#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;

int main()
{


	int x;
	cin >> x;
	int sum = 0;

	for (int i = 1; i <= x; i++)
	{
		sum += i;
	}

	cout << sum << endl;
	return 0;
}