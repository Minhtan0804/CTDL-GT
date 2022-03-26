#include<bits/stdc++.h>
using namespace std;

void Sort(int A[], int n)
{
	for (int test = 1; test < n; test++){
		bool ok = true;
		for (int i = 0; i < n-test; i++){
			if (A[i] > A[i+1]) ok = false;
		}
		if (!ok)
		{
			cout << "Buoc " << test << ": ";
			for (int i = 0; i < n-test; i++){
				if (A[i] > A[i+1]) swap(A[i], A[i+1]);
			}
			for (int i = 0; i < n; i++) cout << A[i] << " ";
			cout << endl;
		}
	}
}

int main()
{
	int n; cin >> n;
	int *A = new int[n];
	for (int i= 0; i < n; i++) cin >> A[i];
	Sort(A, n);
}
