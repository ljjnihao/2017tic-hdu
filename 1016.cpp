#include <iostream>  
using namespace std;
#include<cstring>         
int a[100][100];
int main()
{
	int m,n, i, j, x, y, tol;
	while (cin >> n>>m)
	{
		memset(a, 0, sizeof(a));
		x = 0;
		y = 0;
		tol = a[x][y] = 1;
		while (tol<n*m)    
		{   while (y + 1<m && !a[x][y + 1])
				a[x][++y] = ++tol;  
			while (x + 1<n && !a[x + 1][y])
				a[++x][y] = ++tol;      
			while (y - 1 >= 0&& !a[x][y - 1])
				a[x][--y] = ++tol;          
			while (x - 1 >= 0 && !a[x - 1][y])
				a[--x][y] = ++tol;       
			    
		}
		for (i = 0; i<n; i++)
		{
			for (j = 0; j<m; j++)
			{
				cout << a[i][j];
				if (j == m - 1)
					continue;
				cout << " ";
			}

			cout << endl;
		}
	}
	return 0;
}
