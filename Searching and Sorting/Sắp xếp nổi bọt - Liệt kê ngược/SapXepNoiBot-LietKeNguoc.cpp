#include<bits/stdc++.h>
using namespace std;

void Sort(int A[], int n)
{
	int count = 0;
	int B[105][105];
	for (int test = 1; test < n; test++){
		bool ok = true; 
		for (int i = 0; i < n-test; i++){
			if (A[i] > A[i+1]) ok = false;
		}
		if (!ok)
		{
			for (int i = 0; i < n-test; i++){
				if (A[i] > A[i+1]) swap(A[i], A[i+1]);
			}
			count++;
			for (int i = 0; i < n; i++) B[test][i] = A[i];
		}
	}

	for (int i = count; i > 0; i--)
	{
	  	cout << "Buoc " << i << ": ";
		for (int j = 0; j < n; j++) cout << B[i][j] << " ";
		cout << endl;
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int *A = new int[n];
		for (int i= 0; i < n; i++) cin >> A[i];
		Sort(A, n);
	}
}
