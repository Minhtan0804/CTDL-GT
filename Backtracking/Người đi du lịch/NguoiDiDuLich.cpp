#include<bits/stdc++.h>
using namespace std;
int C[20][20], A[20], B[20] = {0}, n, fopt = 1e9, cmin = 1e9, cost = 0;

void Try(int i)
{
	for (int j = 2; j <= n; j++) {
		if (B[j] == 0){
			A[i] = j; B[j] = 1;
			cost += C[A[i-1]][A[i]];
			if (i == n) fopt = min(fopt, cost+C[A[n]][A[1]]);
			else if (cost + cmin * (n-i+1) < fopt) Try(i+1);
			
			cost -= C[A[i-1]][A[i]];
			B[j] = 0;
		}
	}
}

int main()
{
//	int t; cin >> t;
//	while(t--)
	{
		cin >> n;

		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				cin >> C[i][j];
				if(i != j) cmin = min(cmin, C[i][j]);
			}
		}
		
		A[1] = 1;
		Try(2);
		cout << fopt;
		cout << endl;
	}
}

