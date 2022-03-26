#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		bool pytago = false;
		int n; cin >> n;
		long long *A = new long long[n];
		for (int i = 0; i < n; i++) cin >> A[i];
		sort(A, A+n);
		
		for (int i = 2; i < n; i++)
		{
			int l = 0, r = i-1;
			while(l < r)
			{
				if (A[l]*A[l] + A[r]*A[r] == A[i]*A[i])
				{
					pytago = true;
					break;
				}else if (A[l]*A[l] + A[r]*A[r] < A[i]*A[i]) l++;
				else r--;
			}
			if(pytago) break;
		}
		
		if (pytago) cout << "YES\n";
		else cout << "NO\n";
	}
}

