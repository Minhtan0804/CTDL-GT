#include<bits/stdc++.h>
using namespace std;

int main()
{
//	int t; cin >> t;
//	while(t--)
	{
		int n; cin >> n;
		int *A = new int[n];
		for (int i = 0; i < n; i++) cin >> A[i];
		int x; cin >> x;
		
		for (int i = 0; i < n; i++)
		{
			if(A[i] != x) cout << A[i] << " ";
		}

		cout << endl;
	}
}

