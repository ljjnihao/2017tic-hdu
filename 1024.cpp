#include<iostream>
using namespace std;

int main()
{
	int num;
	while (cin >> num)
	{
		int sum = 0;
		while (num)
		{
			sum += num % 10;
			num = num / 10;
		}
		cout << sum << endl;
	}
	return 0;
}