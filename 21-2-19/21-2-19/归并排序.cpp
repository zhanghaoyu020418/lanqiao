//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//#include <cstdio>
//
//using namespace std;
//
//const int N = 100010;
//int n;
//int a[N];
//int tmp[N];
//
//void merge_sort(int q[], int l, int r)
//{
//	if (l >= r) return;
//	//分界点为二分之一
//	int mid = l + r >> 1;
//	//递归排序
//	merge_sort(q, l, mid);
//	merge_sort(q, mid + 1, r);
//	//有序数组归并
//	int k = 0, i = 0, j = 0;
//	i = l, j = mid + 1;
//	while (i <= mid && j <= r)
//	{
//		if (a[i] <= a[j])
//			tmp[k++] = a[i++];
//		else
//			tmp[k++] = a[j++];
//	}
//	while (i <= mid)
//		tmp[k++] = a[i++];
//	while (j <= r)
//		tmp[k++] = a[j++];
//
//	for (i = 0, j = l; j <= r; i++, j++)
//		q[j] = tmp[i];
//}
//
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//
//	merge_sort(a, 0, n - 1);
//
//	for (int i = 0; i < n; i++)
//		printf("%d ", a[i]);
//	return 0;
//}