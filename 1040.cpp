#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	while (cin >> t)
	{
		int a[100];
		for (int i = 0; i<t; i++)
			cin >> a[i];
		sort(a, a + t);
		do		
		{ for (int i = 0; i<t; i++)
		{
			cout << a[i];
			if (i == t - 1)
				continue;
			cout << " ";
		}
		cout << endl;
		}while (next_permutation(a, a + t ));
	}
}
