#include<iostream>
using namespace std;
int main()
{
	double f(double x);


	double a, b, c, d;
	while (cin >> a >> b >> c >> d)
	{
		cout << f(a) + f(b) + f(c) + f(d) << endl;
	}
	return 0;
}
double f(double x)
{return 3 * x - 6 * x * (x + 3) + 29 * (x + 2) * (x - 1);
}