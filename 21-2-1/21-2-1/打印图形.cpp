#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;

int main()
{
	int line;
	cin >> line;

	for (int i = 0; i < line; i++)
	{
		for (int j = 0; j < line - i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}

