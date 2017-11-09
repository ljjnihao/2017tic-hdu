#include <iostream>
#include <algorithm>
#include<vector>
#include<string>
using namespace std;

bool isLonger(const string &s1, const string &s2)
{
	return s1.size() > s2.size();
}

int main()
{
	string str;
	int n;
	while (cin >> n)
	{
		vector<string>words;
		for (int i = 0; i < n;i++)
		{
			cin >> str;
			words.push_back(str);
		}
		sort(words.begin(), words.end());
		stable_sort(words.begin(), words.end(), isLonger);

		for (const auto &s : words)
			cout << s << endl;
	}
	return 0;
}