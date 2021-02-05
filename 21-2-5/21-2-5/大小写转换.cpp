//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string.h>
//#include <assert.h>
//using namespace std;
//
//bool strjugde(char* arr1, char* arr2)
//{
//	assert(arr1 && arr2);
//	while (*arr1)
//	{
//		if (*arr1 == *arr2)
//		{
//			arr1++;
//			arr2++;
//		}
//		else
//		{
//			if (isupper(*arr1))
//				*arr1 = tolower(*arr1);
//			else if (islower(*arr1))
//				*arr1 = toupper(*arr1);
//			if (*arr1 == *arr2)
//			{
//				arr1++;
//				arr2++;
//			}
//			else
//				return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	char arr1[11];
//	char arr2[11];
//	char arr3[11];
//
//	scanf("%s", arr1);
//	scanf("%s", arr2);
//
//
//	if (strlen(arr1) != strlen(arr2))
//	{
//		printf("1\n");
//	}
//	else if (strcmp(arr1, arr2) == 0)
//	{
//		printf("2\n");
//	}
//	else if (strjugde(arr1, arr2))
//	{
//		printf("3\n");
//	}
//	else
//	{
//		printf("4\n");
//	}
//
//	return 0;
//}
//
