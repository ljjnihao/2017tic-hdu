#include <iostream>  
using namespace std;
#include<cstring>         
char a[100][100];

int main()
{
	int n,x,y,i,j;
	while (cin >> n)
	{
		char s ='a';
		memset(a, 32, sizeof(a));
		x = y = 0;
	
		a[x][y] = s;
		while (x + 1 < n)
		{
			a[++x][y] = ++s;
			if (s == 'z')
				s = '`';
		}
		while (y + 1 < n)
		{
			a[--x][++y] = ++s;
			if (s == 'z')
				s = '`';
		}
		while (x + 1 < n)
		{
			a[++x][y] = ++s;
			if (s == 'z')
				s = '`';
		}
		for (i = 0; i<n; i++)
		{
		 for (j = 0; j<n; j++)
			{
				cout << a[i][j];
				
			}

			cout << endl;
		}
	}
}