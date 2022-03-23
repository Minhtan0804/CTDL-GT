#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, k; cin >> n >> k;
		int *A = new int[n+1];
		int count = 0;

		for (int i = 1; i <= n; i++)
		{
			cin >> A[i];
			if(A[i] <= k) count++;
		}
		if(!count) cout << -1;
		else cout << count;
		cout << endl;
	}
}

