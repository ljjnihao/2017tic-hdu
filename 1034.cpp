#include <iostream>
#include<string>
using namespace std;

#define maxsize 150

struct sStack
{
	char sign[maxsize];
	int top;
};

int InitsStack(sStack &SS)
{
	SS.top = -1;
	return 1;
}

int IsEmptysStack(sStack &SS)
{
	if (SS.top == -1)
		return 1;
	return 0;
}

int PushsStack(sStack &SS, char c)
{
	SS.sign[++SS.top] = c;
	return 1;
}

int UpsStack(sStack &SS)
{
	if (IsEmptysStack(SS))
		return 0;
	SS.top--;
	return 1;
}

char TopsStack(sStack &SS)
{
	if (IsEmptysStack(SS))
		return 0;
	return SS.sign[SS.top];
}

int main()
{
	string s;
	while (cin >> s)
	{
		int length = s.length();
		int i;
		sStack SS;
		InitsStack(SS);
		for (i = 0; i < length; ++i)
		{
			if (s[i] == '(' || s[i] == '[' || s[i] == '{')
				PushsStack(SS, s[i]);
			else if (s[i] == ')' && !IsEmptysStack(SS) && TopsStack(SS) == '(')
				UpsStack(SS);
			else if (s[i] == ')' && !IsEmptysStack(SS) && TopsStack(SS) != '(')
			{
				cout << "illegal" << endl;
			
				goto end;
			}
			else if (s[i] == ']' && !IsEmptysStack(SS) && TopsStack(SS) == '[')
				UpsStack(SS);
			else if (s[i] == ']' && !IsEmptysStack(SS) && TopsStack(SS) != '[')
			{
				cout << "illegal" << endl;
				
				goto end;
			}
			else if (s[i] == '}' && !IsEmptysStack(SS) && TopsStack(SS) == '{')
				UpsStack(SS);
			else if (s[i] == '}' && !IsEmptysStack(SS) && TopsStack(SS) != '{')
			{
				cout << "illegal" << endl;
				
				goto end;
			}
			else if ((s[i] == ')' || s[i] == ']' || s[i] == '}') && IsEmptysStack(SS))
			{
				cout << "illegal" << endl;
			
				goto end;
			}
		}
		if (!IsEmptysStack(SS))
			cout << "illegal" << endl;
		else if (i = (length - 1) && IsEmptysStack(SS))
			cout << "legal" << endl;
	end:;
	}
}
