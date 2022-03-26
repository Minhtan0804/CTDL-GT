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
		long *C = new long[m+n];

		for (int i = 0; i < n; i++) cin >> A[i];
		for (int i = 0; i < m; i++) cin >> B[i];
		
		int j = 0;
		for (int i = 0; i < n; i++) C[j++] = A[i];
		for (int i = 0; i < m; i++) C[j++] = B[i];
		
		sort(C, C+m+n);

		for (int i = 0; i < m+n; i++) cout << C[i] << " ";
		cout << endl;
	}
}

