#include<bits/stdc++.h>
using namespace std;

bool compare(int a, int b)
{
	return abs(a) < abs(b);
}

void minSum(int A[], int n)
{
	sort(A, A+n, compare);
	int min = INT_MAX, x, y;
	
	for (int i = 1; i < n; i++)
	{
		if (abs(A[i-1] + A[i]) < min){
			min = abs(A[i-1] + A[i]);
			x = i-1; y = i;
		}
	}
	
	cout << A[x]+A[y] << endl;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int *A = new int[n];
		for (int i = 0; i < n; i++) cin >> A[i];
		
		minSum(A, n);
	}
	return 0;
}

