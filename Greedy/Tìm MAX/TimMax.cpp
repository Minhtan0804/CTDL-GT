#include<bits/stdc++.h>
using namespace std;
int mod = 1e9+7;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		long long *A = new long long[n];
		for (int i = 0; i < n; i++) cin >> A[i];
		
		sort(A, A+n);
		long long maxx = 0;
		for (int i = 1; i < n; i++)
		{
			maxx += i * A[i];
			maxx %= mod;
		}
		cout << maxx << endl;
	}
}

