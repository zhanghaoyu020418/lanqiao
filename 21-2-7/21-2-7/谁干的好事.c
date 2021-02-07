#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char goodman = 'A';
	int num;
	scanf("%d", &num);
	char x;
	scanf("%c", &x);
	int truth;
	scanf("%d", &truth);
	if (num == 1)
		for (; 'A' <= goodman && goodman <= 'E'; goodman++)
		{
			if (((goodman == 'A') + (goodman == x) == 1) +
				((goodman == 'C') || (goodman == 'E')) +
				((goodman == 'A') || (goodman == 'C') || (goodman == 'D')) +
				(goodman != 'B' && goodman != 'C') +
				(goodman != 'E') == truth)
				printf("%c\n", goodman);
		}

	return 0;
}



