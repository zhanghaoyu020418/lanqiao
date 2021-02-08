#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <assert.h>
using namespace std;


int _strlen(const char* str)
{
	assert(str);
	int count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return count;
}


int main()
{
	char str[101];
	cin >> str;

	cout << _strlen(str);

	return 0;
}

