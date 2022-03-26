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
		
		bool appear = false;
		for (int i = 0; i < n-1; i++)
		{
			for (int j = i+1; j < n; j++)
			{
				if(A[i] == A[j]){
					cout << A[i];
					appear = true;
					break;
				}
			}
			if(appear) break;
		}
		if (!appear) cout << "NO";
		cout << endl;
	}
}

