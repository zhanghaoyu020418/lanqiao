#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int arr[100000];

int cmp_int(const void *e1, const void *e2)
{
	return (*(int*)e1 - *(int *)e2);
}

int i = 0;

int main()
{
	int n = 0;
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}


	qsort(arr, n, sizeof(arr[0]), cmp_int);


	for (i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}

	return 0;
}