//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string.h>
//
//using namespace std;
//
//char str1[255];
//char str2[130];
//
//void reverse_str(char* str)
//{
//	int left = 0;
//	int right = strlen(str) - 1;
//	while (left < right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//int main()
//{
//	cin >> str1;
//
//	int n = 0;
//	for (int i = 1; i < strlen(str1); i += 2)
//	{
//		str2[n] = str1[i];
//		n++;
//	}
//	
//	reverse_str(str2);
//
//	n = 0;
//	for (int i = 1; i < strlen(str1); i += 2)
//	{
//		str1[i] = str2[n];
//		n++;
//	}
//
//	cout << str1 << endl;
//
//
//	return 0;
//}
//
