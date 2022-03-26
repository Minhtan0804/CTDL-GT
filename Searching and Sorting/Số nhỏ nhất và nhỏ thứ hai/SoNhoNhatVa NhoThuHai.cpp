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

		bool check = false;
		int min = 0;
		for (int i = 1; i < n; i++)
		{
			if(A[i] != A[0])
			{
				min = A[i];
				check = true; 
				break;
			}
		}

		if(!check) cout << -1;
		else cout << A[0] << " " << min;
		cout << endl;
	}
}
