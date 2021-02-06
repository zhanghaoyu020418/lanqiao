#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;

bool judge_nums(int n1, int n2)
{
	if (n1 % n2 == 0)
		return 1;
	else
		return 0;
}

int main()
{
	int num1, num2;
	cin >> num1 >> num2;

	cout << judge_nums(num1, num2) << endl;

	return 0;
}

