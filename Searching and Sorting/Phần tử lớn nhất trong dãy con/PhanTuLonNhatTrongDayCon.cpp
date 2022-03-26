#include<bits/stdc++.h>
using namespace std;
int n, k;

int maxSubsetArr(int A[], int i)
{
	int max = 0;
	for (int j = i; j < i+k; j++)
	{
		if (max < A[j]) max = A[j];
	}
	return max;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> k;
		int *A = new int[n];

		for (int i = 0; i < n; i++) cin >> A[i];
		
		for (int i = 0; i < n-k+1; i++)
		{
			cout << maxSubsetArr(A, i) << " ";
		}
		cout << endl;
	}
}

