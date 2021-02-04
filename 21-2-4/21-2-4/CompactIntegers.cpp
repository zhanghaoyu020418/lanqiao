#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;

int CompactIntegers(int n, int *arr)
{
	int index = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i])
		{
			arr[index++] = arr[i];
		}
	}
	return index;
}

int main()
{
	int arr[1000];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int num = CompactIntegers(n, arr);

	cout << num << endl;
	
	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}

