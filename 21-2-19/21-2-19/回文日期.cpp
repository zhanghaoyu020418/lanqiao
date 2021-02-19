#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

const int N = 10010;
int a[N];//存放回文数的数组
int k;
int num;//回文数的后4位
int start, dead;//起始日期和截止日期

int monthdays[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

bool is_leapyear(int year)
{
	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
		return true;
	else
		return false;
}

int main()
{
	//枚举所有年份从1000~9999回文日期
	for (int i = 1000; i <= 9999; i++)
	{
		int x = i;	
		while (x)//获取前四位的回文数
		{
			num = num * 10 + x % 10;
			x /= 10;
		}
		a[k++] = num + i * 10000;
		num = 0;
	}

	//判断在起始日期到截止日期的回文数
	cin >> start;
	cin >> dead;
	int j = 0;
	int tmp[N];//存放日期回文数
	for (int i = 0; i < k; i++)
	{
		if (a[i] >= start && a[i] <= dead)
			tmp[j ++] = a[i];
	}

	//判断在起始日期到截止日期之间的数是否满足日期的合法性
	int res = 0;
	for (int i = 0; i < j; i++)
	{
		int day = tmp[i] % 100;
		int month = tmp[i] / 100 % 100;
		int year = tmp[i] / 10000;
		if (is_leapyear(year))
			monthdays[2] = 29;
		else
			monthdays[2] = 28;
		if (day >= 0 && day <= monthdays[month] && month <= 12 && month >= 1)
			res++;
	}

	cout << res << endl;

	return 0;
}