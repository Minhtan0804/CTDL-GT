#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, min = INT_MAX; cin >> n;
		int *A = new int[n];
		for (int i = 0; i < n; i++) cin >> A[i];
		
		sort(A, A+n);
		
		for (int i = 1; i < n; i++)
		{
			int k = abs(A[i] - A[i-1]);
			if(k < min) min = k;
		}
		cout << min << endl;
	}
}

