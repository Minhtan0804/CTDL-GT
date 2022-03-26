#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int *A = new int[n];
		int *B = new int[n];
		
		for (int i = 0; i < n; i++)
		{
			cin >> A[i];
			B[i] = A[i];
		}
		
//		for (int i = 0; i < n; i++) cout << B[i] << " ";
//		cout << endl;
		sort(A, A+n);
//		for (int i = 0; i < n; i++) cout << A[i] << " ";	
		for (int i = 0; i < n; i++)
		{
			if(A[i] != B[i])
			{
				cout << i+1 << " "; break;
			} 
		}
		
		for (int i = n-1; i >= 0; i--)
		{
			if(A[i] != B[i])
			{
				cout << i+1 << "\n"; break;
			}
		}
		 
	}
}
