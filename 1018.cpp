#include<iostream>
using namespace std;
int main()
{
	int F(int x),G(int x),K(int x);


	int a, b;
	while (cin >> a >> b)
	{
		cout << K(a) - K(b) << endl;
	}
	return 0;
}
int F(int x)
{
	return x * 3 + ((x - 1) * 6 + 4) + 3;
}
int G(int x)
{
return F(x) * 2 -F(x) * F(x - 1);
}
int K(int x)
{return  G(x) * (G(2) - F(4));
}