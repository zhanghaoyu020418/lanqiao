#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

const int N = 10010;
int a[N];//��Ż�����������
int k;
int num;//�������ĺ�4λ
int start, dead;//��ʼ���ںͽ�ֹ����

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
	//ö��������ݴ�1000~9999��������
	for (int i = 1000; i <= 9999; i++)
	{
		int x = i;	
		while (x)//��ȡǰ��λ�Ļ�����
		{
			num = num * 10 + x % 10;
			x /= 10;
		}
		a[k++] = num + i * 10000;
		num = 0;
	}

	//�ж�����ʼ���ڵ���ֹ���ڵĻ�����
	cin >> start;
	cin >> dead;
	int j = 0;
	int tmp[N];//������ڻ�����
	for (int i = 0; i < k; i++)
	{
		if (a[i] >= start && a[i] <= dead)
			tmp[j ++] = a[i];
	}

	//�ж�����ʼ���ڵ���ֹ����֮������Ƿ��������ڵĺϷ���
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