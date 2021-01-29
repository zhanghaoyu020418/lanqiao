#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x1, y1, x2, y2;
	double x3, y3, x4, y4;

	cin >> x1 >> y1 >> x2 >> y2;
	cin >> x3 >> y3 >> x4 >> y4;

	double a = fabs(x2 - x1);
	double b = fabs(y2 - y1);
	double c = fabs(x4 - x3);
	double d = fabs(y4 - y3);

	double X1 = x1 + a / 2.0;
	double Y1 = y1 + b / 2.0;
	double X2 = x3 + c / 2.0;
	double Y2 = y3 + d / 2.0;

	double ret1 = a / 2.0 + c / 2.0 - fabs(X2 - X1);
	double ret2 = b / 2.0 + d / 2.0 - fabs(Y2 - Y1);

	printf("%.2lf", ret1 * ret2);

	return 0;
}


//#include <algorithm>
//int main()
//{
//	double x1, y1, x2, y2;
//	double x3, y3, x4, y4;
//
//	cin >> x1 >> y1 >> x2 >> y2;
//	cin >> x3 >> y3 >> x4 >> y4;
//
//	double X1 = max(min(x1, x2), min(x3, x4));
//	double Y1 = max(min(y1, y2), min(y3, y4));
//	double X2 = min(max(x1, x2), max(x3, x4));
//	double Y2 = min(max(y1, y2), max(y3, y4));
//
//	if ((min(x1, x2) >= max(x3, x4)) || (max(x1, x2) <= min(x3, x4))
//		|| (min(y1, y2) >= max(y3, y4)) || (max(y1, y2) <= min(y3, y4)))
//		cout << 0.00 << endl;
//	else
//
//		printf("%.2lf", (X2 - X1)*(Y2 - Y1));
//
//	return 0;
//}