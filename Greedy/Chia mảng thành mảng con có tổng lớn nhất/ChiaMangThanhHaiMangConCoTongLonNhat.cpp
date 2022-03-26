#include<bits/stdc++.h>
using namespace std;

int sumArr(int A[], int i, int j)
{
	int sum = 0;
	for (i; i <= j; i++) sum += A[i];
	return sum;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, k; cin >> n >> k;
		int *A = new int[n];
		for (int i = 0; i < n; i++) cin >> A[i];

		sort(A, A+n);
		if (k < n-k) cout << abs(sumArr(A, 0, k-1)-sumArr(A, k, n-1));
		else cout << abs(sumArr(A, 0, n-k-1)-sumArr(A, n-k, n-1));
		cout << endl;
	}
}

