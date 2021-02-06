//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//
//void reverse(char* str, int start, int end)
//{
//
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
//	
//int main()
//{
//	char str[100];
//	gets(str);
//	int len = strlen(str);
//
//	reverse(str, 0, len - 1);//要反转整个字符串要把字符数组和首尾的位置传过去
//	
//	int start = 0;//记录字符串的起始地点
//	int end = 0;//记录字符串的终止地点
//	char * cur = str;
//
//	while (1)//将整个数组遍历一遍
//	{
//		if (*cur == ' ' || *cur == '\0')//当*cur等于空格或者到最后的时候，就反转这个单词
//		{
//			reverse(str, start, end - 1);
//			start = end + 1;
//		}
//
//		end++;
//		if (*cur == '\0')//为了避免数组越界，当数组遍历完一遍的时候就结束
//			break;
//		cur++;
//	}
//
//	printf("%s\n", str);
//
//	return 0;
//}
//
