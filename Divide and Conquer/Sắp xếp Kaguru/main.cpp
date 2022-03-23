#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b)
{
	return a > b;
}

int main()
{
	int t, i, l, r, n; cin >> t;
	while(t--)
	{
		cin >> n;
		int *A = new int[n];

		for (int i = 0; i < n; i++) cin >> A[i];

		sort(A, A+n, cmp);
		int count = 0;
		l = 0; r = n/2;
		while(l < n/2 && r < n)
		{
			if (A[l] >= 2*A[r]){
				count++; l++; r++;
			}else r++;
		}

		cout << n-count << endl;
	}
}

