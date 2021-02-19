//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <sstream>
//
//using namespace std;
//
//const int N = 10010;
//int n, m;//m是断号,n是重号
//int a[N];
//int x = 0;
//
//int main()
//{
//	int cnt;
//	cin >> cnt;
//	string line;
//
//	getline(cin, line);//吞掉cin的回车和其他乱七八糟的字符
//	while (cnt--)
//	{
//		getline(cin, line);
//		stringstream ssin(line);
//		while (ssin >> a[x])
//			x++;
//	}
//
//	//给数组排序，然后遍历一遍
//	sort(a, a + x);
//	for (int i = 1; i < x; i++)
//	{
//		if (a[i] == a[i - 1])
//			n = a[i];
//		if (a[i] - a[i - 1] == 2)
//			m = a[i] - 1;
//	}
//
//	cout << m << " " << n << endl;
//	return 0;
//}