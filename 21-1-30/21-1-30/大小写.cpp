#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	char a;
//	cin >> a;
//
//	char b = a - 32;
//
//	cout << b << endl;
//
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int i = 0;
//
//	for (i = 100; i <= 999; i++)
//	{
//		int a = i % 10;
//		int b = i / 10 % 10;
//		int c = i / 100;
//		if (a*a*a + b * b*b + c * c*c == i)
//		{
//			cout << i << endl;
//		}
//	}
//
//	return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//
//	int a[10];
//
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> a[i];
//	}
//
//	int max = a[0];
//
//	for (int i = 0; i < 10; i++)
//	{
//		if (max < a[i])
//		{
//			max = a[i];
//		}
//	}
//
//	cout << max << endl;
//	return 0;
//}
//
//
//#include <iostream>
//
//using namespace std;
//
//const int N = 1000000;
//int a[N];
//
//int main()
//{
//
//
//	int n;
//	cin >> n;
//	int val;
//	cin >> val;
//
//	for (int i = 0; i < n; i++)
//	{
//		a[i] = i + 1;
//	}
//
//	int cnt = 0;
//
//
//	for (int i = 0; i < n; i++)
//	{
//		while (a[i])
//		{
//			if (a[i] % 10 == val)
//			{
//				cnt++;
//			}
//			a[i] /= 10;
//		}
//	}
//	cout << cnt << endl;
//
//	return 0;
//}
//

//#include <iostream>
//
//using namespace std;
//
//const int N = 1010;
//int dp[N];
//int n, p, t;
//
//int main()
//{
//	cin >> n >> p >> t;
//
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> dp[i];
//	}
//
//
//
//
//	return 0;
//}


//#include <iostream>
//
//using namespace std;
//int n, m;
//int cnt = 0;
//
//void move(int n, char a, char b)
//{
//	cnt++;
//	if (cnt == m)
//	{
//		cout << "#" << n << ": "<< a << "->" << b << endl;
//	}
//}
//
//
//void hanoi(int n, char a, char b, char c)
//{
//	if (n == 1)
//	{
//		move(n, a, c);
//	}
//	else
//	{
//		hanoi(n - 1, a, c, b);
//		move(n, a, c);
//		hanoi(n - 1, b, a, c);
//	}
//
//}
//
//
//
//int main()
//{
//
//	cin >> n >> m;
//
//	hanoi(n, 'A', 'B', 'C');
//
//	cout << cnt << endl;
//
//	return 0;
//}
//

//#include <iostream>
//
//using namespace std;
//
//
//void cr(int num)
//{
//	if (num > 9)
//	{
//		cr(num / 10);
//	}
//	printf("%d-", num % 10);
//}
//
//
//int main()
//{
//	int num;
//	scanf("%d", &num);
//
//	cr(num);
//
//
//	return 0;
//}

