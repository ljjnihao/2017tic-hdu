#include <iostream>
#include <string>
using namespace std;
int main()
{
	int  acount;
	string a;
	while (cin >> a)
	{ 
		acount = 0;
		for (int i = 0; i < a.size(); i++)
		{
			
			if (a[i] == 'a')
			{
				acount++;
			}
		}
		cout << acount << endl;
		acount = 0;
	}
	return 0;
}