#include<iostream>
using namespace std;
int main()
{
	int m, n, shuzu[10][10], s, a, b;
	while (cin >> n >> m)
	{
		s = 0;
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < m; b++)
			{
				cin >> shuzu[a][b];
				s += shuzu[a][b];
			}
		}
		cout << s << endl;

		for (a = 0; a < n; a++)
		{
			for (b = 0; b < m-1; b++)
			{
				cout << shuzu[a][b] << " ";
				
			}
			cout << shuzu[a][b];

			cout << endl;
		}
	}
	return 0;
}