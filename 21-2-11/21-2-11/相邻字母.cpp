#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;

int main()
{
	char ch[4];
	cin >> ch[1];
	ch[0] = ch[1] - 1;
	ch[2] = ch[1] + 1;
	ch[3] = '\0';
	if (ch[1] == 'A')
		ch[0] = 'Z';
	if (ch[1] == 'a')
		ch[0] = 'z';
	if (ch[1] == 'Z')
		ch[2] = 'A';
	if (ch[1] == 'z')
		ch[2] = 'a';
	cout << ch << endl;

	return 0;
}

