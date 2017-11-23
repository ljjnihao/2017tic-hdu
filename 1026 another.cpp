#include<iostream>
using namespace std;
int main()
{
	int a, n ;
	while (cin >> a >> n)
	{
		int f(int x);
		cout << f(n) << endl;
	}
}
int f(int x)
{
	if (x = 1)
		return a;
	else return (x % 2 == 0) ? f(x / 2) + 1 : f((x + 1) / 2) * 3 - 2;
}