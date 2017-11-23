#include<iostream>
#include<vector>
#include <algorithm> 
using namespace std;
int main()
{
	vector<int>s;
	int n,x;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		s.push_back(x);
	}
	sort(s.begin(), s.end());
	cout << s.size() << endl;
	for (int i = 0; i < n; i++)
	{
		cout << s[i];
		if (i != n - 1)
			cout << " ";
	}
	cout << endl;
}