//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string>
//
//using namespace std;
//
////20100122201001221234567890
////          2010012220100122
//
////�����������飬������ֵ�ÿһλ
////����һ���������ÿһλ����
////�ó��������ֵ�ÿһλ���֣�����ټ�һ����λ
////��Ŀ����������
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
//	int reti = 0;//ret������±�
//
//	int num; //�����������λ����ӵĺ�
//	int nextnum = 0;//������λ
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
