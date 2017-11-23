#include "iostream"
using namespace std;
main()
{
	int i, acount = 0;
	char a[100];
	while (cin >> a)
	{
		cout << a << endl;
		for (i = 0; i < 100; i++)
		{
			if (a[i] == 'a')
			{
				acount++;
			}
		}
		cout << acount << endl;
	}
}