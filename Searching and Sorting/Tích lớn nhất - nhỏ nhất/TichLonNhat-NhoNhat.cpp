#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, m; cin >> n >> m;
		int *A = new int[n];
		int *B = new int[m];
		
		for (int i = 0; i < n; i++) cin >> A[i];
		for (int i = 0; i < m; i++) cin >> B[i];
		
		sort(A, A+n);
		sort(B, B+m);
		cout << (long long)A[n-1]*B[0] << endl;
	}
}
