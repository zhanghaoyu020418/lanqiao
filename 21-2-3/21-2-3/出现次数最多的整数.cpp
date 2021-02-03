#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;

int num[20];
int cnt[20];

int main()
{
	int n;
	cin >> n;
	if (n <= 0)                     //如果数字个数<=0时，就返回空
		return NULL;

	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}

	int prevnum = 1e10;            //记录前一个数字的值
	int x = 0;                     //记录数组的下标


	for (int i = 0; i < n; i++)
	{
		if (prevnum != num[i])     //如果前后两个数不相等，则说明开始了一个新的数
		{
			prevnum = num[i];      //现在的数字就变成了前一个数字
			cnt[x]++;              //记录次数的下标数组就加一
			x++;                   //向后移一位，开始准备记录下一个数出现的个数
		}
		else
		{
			cnt[x - 1]++;          //两个数相等得话，就在前一个记录数组的值+1
		}
	}

	int max = cnt[0];
	int samei = 0;                 //记录出现次数最大的数的下标

	for (int i = 0; i <= x; i++)
	{
		if (max < cnt[i])
		{
			max = cnt[i];
			samei = i;             
			//如果数字出现的次数大，则会覆盖前一个数的下标，如果出现相同的次数，就1以第一次出现的为准，这样就得到相同时最小的数字了
		}
	}

	cout << num[samei] << endl;



	return 0;
}

