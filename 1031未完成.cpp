#include<iostream>
using namespace std;
int main()
{
	int a,n,s1,s2;
	while (cin >> a >> n)
	{
		s1 = 1; s2 = 0;
		while(n>1)
		{
			if (n % 2 == 0)
			{
				s2 = s2 + s1;
				n = n / 2;
			}
			else if (n % 2 == 1)
			{
				s2 = s2 - 2*s1;
				s1 = s1 * 3;
				n = (n +1)/ 2;
			}
		}
		cout << s1*a + s2 << endl;
	}
}
//F(x) = (x % 2 == 0) ? F(x / 2) + 1 : F((x + 1) / 2) * 3 - 2;