#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;

int num[20];
int cnt[20];

int main()
{
	int n;
	cin >> n;
	if (n <= 0)                     //������ָ���<=0ʱ���ͷ��ؿ�
		return NULL;

	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}

	int prevnum = 1e10;            //��¼ǰһ�����ֵ�ֵ
	int x = 0;                     //��¼������±�


	for (int i = 0; i < n; i++)
	{
		if (prevnum != num[i])     //���ǰ������������ȣ���˵����ʼ��һ���µ���
		{
			prevnum = num[i];      //���ڵ����־ͱ����ǰһ������
			cnt[x]++;              //��¼�������±�����ͼ�һ
			x++;                   //�����һλ����ʼ׼����¼��һ�������ֵĸ���
		}
		else
		{
			cnt[x - 1]++;          //��������ȵû�������ǰһ����¼�����ֵ+1
		}
	}

	int max = cnt[0];
	int samei = 0;                 //��¼���ִ������������±�

	for (int i = 0; i <= x; i++)
	{
		if (max < cnt[i])
		{
			max = cnt[i];
			samei = i;             
			//������ֳ��ֵĴ�������Ḳ��ǰһ�������±꣬���������ͬ�Ĵ�������1�Ե�һ�γ��ֵ�Ϊ׼�������͵õ���ͬʱ��С��������
		}
	}

	cout << num[samei] << endl;



	return 0;
}

