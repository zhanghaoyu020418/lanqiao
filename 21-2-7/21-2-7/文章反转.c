//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//
//char str[100000];
//
//inline void reverse(char* str, int start, int end)
//{
//	while (start < end)
//	{
//		char tmp = str[start];
//		str[start] = str[end];
//		str[end] = tmp;
//		start++;
//		end--;
//	}
//}
//
//int main()
//{
//	gets(str);
//
//	int len = strlen(str);
//	reverse(str, 0, len - 1);
//
//	char* tmpstr = str;
//	int start = 0;
//	int end = 0;
//
//	while (1)
//	{
//
//		if (*tmpstr == ' ' || *tmpstr == '\0')
//		{
//			reverse(str, start, end - 1);
//			start = end + 1;
//		}
//		if (*tmpstr == '\0')
//			break;
//		end++;
//		tmpstr++;
//	}
//	
//
//	puts(str);
//
//	return 0;
//}
//
