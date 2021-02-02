//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string>
//
//using namespace std;
//
////20100122201001221234567890
////          2010012220100122
//
////创建两个数组，存放数字的每一位
////创建一个数组接受每一位数字
////拿出两个数字的每一位数字，相加再加一个进位
////将目标数组逆序
//
//int main()
//{
//	string fir, sec;
//	getline(cin, fir);
//	getline(cin, sec);
//
//	int fi = fir.length() - 1;
//	int si = sec.length() - 1;
//
//
//
//	int MAX = fir.length() > sec.length() ? fir.length() : sec.length();
//
//	char ret[100] = { 0 };
//	int reti = 0;//ret数组的下标
//
//	int num; //存放两个数的位数相加的和
//	int nextnum = 0;//保留进位
//
//	while (MAX--)
//	{
//		int f = '0';
//		int s = '0';
//		if (fi + 1)
//		{
//			f = fir[fi];
//			fi--;
//		}
//		if (si + 1)
//		{
//			s = sec[si];
//			si--;
//		}
//		num = f - '0' + s - '0' + nextnum;
//
//		if (num > 9)
//		{
//			num -= 10;
//			nextnum = 1;
//		}
//		else
//		{
//			nextnum = 0;
//		}
//
//		ret[reti] = num + '0';
//		reti++;
//
//	}
//
//	if (nextnum == 1)
//	{
//		ret[reti] = '1';
//		reti++;
//	}
//
//
//	for (int i = reti - 1; i >= 0; i--)
//	{
//		cout << ret[i];
//	}
//
//	return 0;
//}
//
