#include<string>  
#include<iostream> 
#include<cstring>
using namespace std;
int nextnum[100];
int main()
{
	string s;
	int n;
	while (cin >> s)
	{
		int len = s.size();
		memset(nextnum, 0, sizeof(0));
		int i = 0, j = 1;
		while (j<len) 
		{
			if (s[i] != s[j] && i != 0)
				i--;
			
			else if (s[i] != s[j] && i == 0)	
				nextnum[j++] = 0;		

			else if (s[i] == s[j])			
				nextnum[j++] = i++ + 1;
			
		}
		int l = len - nextnum[len - 1];
		if (len%l!=0)
			l = len;
		cout << l << endl;
	}
	return 0;
}