#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>

using namespace std;

int n;
const int N = 310;
int f[N][N];
int w[N], s[N];

int main()
{
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> w[i];
	}

	for (int i = 1; i <= n; i++)
	{
		s[i] = s[i - 1] + w[i];                    //Ԥ����ǰ׺��
	}

	for (int len = 2; len <= n; len++)           //ö�����䳤��
	{
		for (int l = 1; l + len - 1 <= n; l++)    //����߿�ʼö��
		{
			int r = l + len - 1;
			f[l][r] = 1e8;
			for (int k = l; k < r; k++)
			{
				f[l][r] = min(f[l][r], f[l][k] + f[k + 1][r] + s[r] - s[l - 1]);
			}
		}
	}

	cout << f[1][n] << endl;


	return 0;
}