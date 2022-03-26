#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		long long *A = new long long[n];
		long long *B = new long long[n];

		for (int i = 0; i < n; i++) cin >> A[i];
		for (int i = 0; i < n; i++) cin >> B[i];

		sort(A, A+n);
		sort(B, B+n);

		long long p1 = 0, p2 = 0;
		for (int i = 0; i < n; i++)
		{
			p1 += A[i]*B[n-1-i];
			p2 += B[i]*A[n-1-i];
		}
		
		if (p1 >= p2) cout << p1;
		else cout << p2;

		cout << endl;
	}
}

