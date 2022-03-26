#include<bits/stdc++.h>
using namespace std;

bool find3Num(int A[], int n, int sum)
{
	sort(A, A+n);
	int l, r;
	
	for (int i = 0; i < n-2; i++)
	{
		l = i+1; r = n-1;
		while(l < r)
		{
			if (A[i] + A[l] + A[r] == sum) return true;
			else if (A[i] + A[l] + A[r] < sum) l++;
			else r--;
		}
	}
	return false;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, sum; cin >> n >> sum;
		int *A = new int[n];

		for (int i = 0; i < n; i++) cin >> A[i];
		
		if(find3Num(A, n, sum)) cout << "YES\n";
		else cout << "NO\n";
	}
}
