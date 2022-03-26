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
		long long sum = 0;
		
		for (int i = 0; i < n; i++)
		{
			if(A[i] > 0) sum += A[i]*2;
		}
		cout << sum;
		cout << endl;
	}
}

