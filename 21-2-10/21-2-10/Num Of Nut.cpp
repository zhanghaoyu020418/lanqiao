//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//int Lcm(int num1, int num2)//最小公倍数
//{
//	int a = num1;
//	int b = num2;
//	while (num1 % num2)
//	{
//		int rm = num1 % num2;
//		num1 = num2;
//		num2 = rm;
//	}
//	//num2就是最大公约数
//	//最小公倍数 = num1*num2/最大公约数
//	return  a * b / num2;
//}
//
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//
//	int ret = Lcm(Lcm(a, b), c);
//
//	cout << ret << endl;
//
//	return 0;
//}
//
