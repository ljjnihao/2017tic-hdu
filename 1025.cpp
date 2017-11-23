#include<iostream>
using namespace std;
int main()
{
	int t,n,k,a,b,times=0;
	cin >> t;
		for(int i=0;i<t;i++)
	{
		times = times + 1;
		
		cin >> n >> k;
		for (int i = 0; i<n; i++)
		{
			cin >> a >> b;
			if (k == a)
				k = b;
			else	if (k == b)
				k = a;
		}
		cout << "Case "<<times<<": " << k << endl;

}
}