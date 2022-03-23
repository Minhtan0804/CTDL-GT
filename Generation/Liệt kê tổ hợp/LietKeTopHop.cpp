#include<bits/stdc++.h>
using namespace std;
int n, k, t;
int A[30000], B[30];

void xuat()
{
	for (int i = 1; i <= k; i++) cout << A[B[i]] << " ";
	cout << endl;
}

void Try(int i)
{
	for (int j = B[i-1]+1; j <= n-k+i; j++)
	{
		B[i] = j;
		if (i == k) xuat();
		else Try(i+1);
	}
}

int main()
{
//	int t; cin >> t;
//	while(t--)
//	{
		cin >> n >> k;

		for (int i = 1; i <= n; i++) cin >> A[i];

		sort(A+1, A+n+1);
		t = 1;
		for (int i = 2; i <= n; i++)
		{
			if(A[i] != A[i-1]) A[++t] = A[i];
		}
		n = t;
		for (int i = 1; i <= n; i++) B[i] = i;
		
		Try(1);
//	}
}

