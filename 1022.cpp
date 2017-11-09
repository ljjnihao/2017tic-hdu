#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a[100];
	int n;
	double total;
	while (cin >> n)
	{
		total = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			total=a[i]+total;
		}
		cout << fixed << setprecision(4)<< total / n << endl;
	}
	return 0;
}