#include<iostream>
using namespace std;
int main()
{
	int a,b;
	while (cin >> a)
	{
		b = 0;
		while (a > 0)
		{
			if (a % 2 == 1)
				b = b + 1;
			a = a / 2;
		}
		cout << b << endl;
	}
}