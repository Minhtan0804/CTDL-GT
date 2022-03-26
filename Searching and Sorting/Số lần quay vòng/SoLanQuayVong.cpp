#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		bool stop = false;
		int n; cin >> n;
		long long *A = new long long[n];

		for (int i = 0; i < n; i++) cin >> A[i];
		
		for (int i = 0; i < n-1; i++)
		{
			if(A[i] > A[i+1]){
				cout << i+1;
				stop = true;
				break;
			}
		}
		if(!stop) cout << 0;
		cout << endl;
	}
}

