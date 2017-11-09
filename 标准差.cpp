#include<iostream>
using namespace std;
int main()
{
	int a[100];
	int n, max, min;

	while (cin >> n)
	{
		max = 0;
		min = 100;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] > max)
				max =a[i] ;
			if (a[i] < min)
				min =a[i] ;
		}
		cout << max - min << endl;
	}
	return 0;
}