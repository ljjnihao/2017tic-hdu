#include<iostream>
#include<cstring>

using namespace std;
int main()
{
	char a[100];
	while (cin >> a)
	{
		for (int i = 0; i <strlen(a); i++)
		{
			if (a[i] >= 'a'&&a[i] <= 'z')
				a[i] = a[i] - 32;
		}
		cout << a << endl;
	}
}