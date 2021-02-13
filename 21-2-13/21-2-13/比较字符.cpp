#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string.h>
#include <assert.h>
using namespace std;

int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}
	if (*str1 > *str2)
		return -1;
	if (*str1 < *str2)
		return 1;
}

int main()
{
	char str1[1010], str2[1010];

	cin >> str1 >> str2;

	cout << my_strcmp(str1, str2) << endl;

	return 0;
}

