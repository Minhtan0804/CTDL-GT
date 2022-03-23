#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		long long *A = new long long[n];
		long long *B = new long long[n-1];

		for (int i = 0; i < n; i++) cin >> A[i];
		for (int i = 0; i < n-1; i++) cin >> B[i];

		for (int i = 0; i < n; i++)
		{
			if (A[i] != B[i]){
				cout << i+1;
				break;
			}
		}

		cout << endl;
	}
}

