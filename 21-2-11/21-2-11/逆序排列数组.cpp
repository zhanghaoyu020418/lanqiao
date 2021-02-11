//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//int arr[21];
//
//void _swap(int *num1, int *num2)
//{
//	int tmp = *num1;
//	*num1 = *num2;
//	*num2 = tmp;
//}
//
//int main()
//{
//	int num = 0;
//	int N;
//	int i = 0;
//	while (scanf("%d", &num))
//	{
//		arr[i] = num;
//		i++;
//		if (num == 0)
//			break;
//	}
//
//	int left = 0;
//	int right = i - 1;
//	while (left < right)
//	{
//		_swap(&arr[left], &arr[right]);
//		left++;
//		right--;
//	}
//
//	int len = i;
//
//	for (i = 1; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//	return 0;
//}
//
