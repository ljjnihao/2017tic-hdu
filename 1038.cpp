#include<iostream>
#include<string>
using namespace std;
int c[100],d[100],e[100];


int main()
{
	string a, b;
	int len1, len2, k;
	while (cin >> a >> b)
	{
		int up = 0, t;
		memset(c, 0, sizeof(c));
		memset(d, 0, sizeof(d));
		memset(e, 0,sizeof(e));
		len1 = a.length();
		len2 = b.length();
		k = 0;
		for (int i = len1 - 1; i >= 0; i--)
		{
			c[k] = a[i] - '0';
			k++;
		}
		k = 0;
		for (int i = len2 - 1; i >= 0; i--)
		{
			d[k] = b[i] - '0';
			k++;
		}
		for (int i = 0; i<len1 + 1 || i<len2 + 1; i++)
		{
			e[i] = c[i] + d[i] + up;
			up = e[i] / 10;
			if (e[i]>9)
				e[i] = e[i] - 10;
		}
		for ( t = 99; t!=-1;t--)
		{
			if (e[t])
				break;
		}
		if (e[t + 1] != 0)
			cout << e[t + 1];
		for (int i = t; i >= 0; i--)
			cout << e[i];
		cout << endl;
	}
}