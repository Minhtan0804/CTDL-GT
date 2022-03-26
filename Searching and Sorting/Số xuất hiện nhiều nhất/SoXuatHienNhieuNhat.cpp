#include<bits/stdc++.h>
using namespace std;
int B[100005];

int main()
{
	int t; cin >> t;
	while(t--)
	{
		memset(B, 0, sizeof(B));
		int n; cin >> n;
		int *A = new int[n];

		for (int i = 0; i < n; i++)
		{
			cin >> A[i];
			B[A[i]]++;
		}
		
		int k, max = n/2;
		for (int i = 0; i < n; i++)
		{
			if (max < B[A[i]]){
				 max = B[A[i]];
				 k = A[i];
			}
		}
		if (max <= n/2) cout << "NO";
		else cout << k;
		cout << endl;
	}
}

