#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int m, n, k; cin >> m >> n >> k;
		int *A = new int[n+m];

		for (int i = 0; i < n+m; i++) cin >> A[i];

		sort(A, A+n+m);

		cout << A[k-1] << endl;
	}
}

