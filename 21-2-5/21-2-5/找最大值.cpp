	#define _CRT_SECURE_NO_WARNINGS 1
	#include <iostream>
	#include <stdlib.h>
	using namespace std;

	int arr[101];
	int arr1[101];

	int cmp_int(const void *e1, const void *e2)
	{
		return *(int *)e2 - *(int *)e1;
	}

	int main()
	{
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			arr1[i] = arr[i];
		}



		qsort(arr, n, sizeof(int), cmp_int);

		int max = arr[0];
		int maxi = -1;
		for (int i = 0; i < n; i++)
		{
			if (arr[0] == arr1[i])
				maxi = i;
		}

		cout << max << " " << maxi << endl;

		return 0;
	}

