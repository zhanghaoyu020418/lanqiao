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
//	reverse(str, 0, len - 1);//Ҫ��ת�����ַ���Ҫ���ַ��������β��λ�ô���ȥ
//	
//	int start = 0;//��¼�ַ�������ʼ�ص�
//	int end = 0;//��¼�ַ�������ֹ�ص�
//	char * cur = str;
//
//	while (1)//�������������һ��
//	{
//		if (*cur == ' ' || *cur == '\0')//��*cur���ڿո���ߵ�����ʱ�򣬾ͷ�ת�������
//		{
//			reverse(str, start, end - 1);
//			start = end + 1;
//		}
//
//		end++;
//		if (*cur == '\0')//Ϊ�˱�������Խ�磬�����������һ���ʱ��ͽ���
//			break;
//		cur++;
//	}
//
//	printf("%s\n", str);
//
//	return 0;
//}
//
