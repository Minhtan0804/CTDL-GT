#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int *A = new int[n];
		for (int i = 0; i < n; i++) cin >> A[i];

		sort(A, A+n);
		long long a = 0, b = 0;
		for (int j = 0; j < n; j++){
			if(j % 2 == 0) a = a*10+A[j];
			else b = b*10+A[j];
		}
		cout << a+b << endl;
	}
}

