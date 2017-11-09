#include<iostream>
#include <random>
#include<iomanip>
using namespace std;
int main()
{
	int caseCnt, L, R, D, U, K, B1, B2,N,x[50],y[50],r[50],c;
	cin >> caseCnt;
		for (int i = 0; i < caseCnt; i++)
		{
			cin >> L >> R >> D >> U >> K >> B1 >> B2 >> N;
			int t = 0;
			if (B1 <= B2)
			{
				c = B1;
				B1 = B2;
				B2 = c;
			}
			double per, a, b;
			for (int n = 0; n < N; n++)
			{
				cin >> x[n] >> y[n] >> r[n];
			}
			  default_random_engine generator;
			 uniform_real_distribution<double> e1(L, R), e2(D, U);
			for (int n = 0; n < 1000000; n++)
			{
				a = e1(generator);
				b = e2(generator);
				if (b <= a*K + B1&& b >= a*K + B2)
				{
					t++;
					continue;
				}
				for (int s = 0; s < N; s++)
				{
					if ((a - x[s])*(a - x[s]) + (b - y[s])*(b - y[s]) <= (r[s]* r[s]))
					{
						t++;
						break;
					}
				}
			}
				per =100- double(t) / 10000;
				cout << fixed << setprecision(0) << per << "%" << endl;
			}
	}