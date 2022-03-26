#include<bits/stdc++.h>
using namespace std;

bool isImpossible(int A[], int n)
{
	int B[n+1];
	
	copy(A+1, A+n+1, B+1);
	
	sort(B+1, B+n+1);
	
	for (int i = 1; i <= n; i++)
	{
		if (A[i] != B[i] && A[i] != B[n+1-i]) return false;
	}
	return true;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int *A = new int[n+1];
		for (int i = 1; i <= n; i++) cin >> A[i];
		
		if (isImpossible(A, n)) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}

