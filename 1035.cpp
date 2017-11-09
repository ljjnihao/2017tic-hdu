#include<iostream>
#include<set>
using namespace std;
int main()
{
	int Q, x, y;
	set<int>s;
	set<int>::iterator it;
	cin >> Q;
	for (int i = 0; i < Q; i++)
	{
		cin >> y >> x;
		if (y == 1)
			s.insert(x);
		 if (y == 2)
		{
			it = s.find(x);
			if (it != s.end())
				s.erase(x);
		}
		 if (y == 3)
		{
			it = s.find(x);
			if (it != s.end())
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}

	}

}