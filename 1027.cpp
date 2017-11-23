#include<iostream>
using namespace std;
int main()
{
	int xa, ya, xb, yb, xc, yc;
	while (cin >> xa >> ya >> xb >> yb >> xc >> yc)
	{
		if ((xb - xa)* (yc - ya) == (yb - ya)*(xc - xa) )
			cout << "YES" << endl;
		else cout << "NO" << endl;

	}
}