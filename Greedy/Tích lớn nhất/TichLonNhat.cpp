#include<bits/stdc++.h>
using namespace std;

int main()
{
//	int t; cin >> t;
//	while(t--)
	{
		int n; cin >> n;
		long long *A = new long long[n];

		for (int i = 0; i < n; i++) cin >> A[i];

		sort(A, A+n);
		long long k = A[n-1]*A[n-2];
		k = max(k, A[n-1]*A[n-2]*A[n-3]);
		k = max(k, A[0]*A[1]);
		k = max(k, A[0]*A[1]*A[n-1]);

		cout << k << endl;
	}
}

