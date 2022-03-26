#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
	    int n; cin >> n;
	    int *A = new int[n];
	    int B[105][105];
	    for (int i = 0; i < n; i++) cin >> A[i];
	
	    for (int i = 0; i < n-1; i++)
	    {
		   	for (int j = i+1; j < n; j++)
	    	{
	    		if(A[i] > A[j]) swap(A[i], A[j]);
			}
			for (int j = 0; j < n; j++) B[i][j] = A[j];
		}
		for (int i = n-2; i >= 0; i--)
		{
			cout << "Buoc " << i+1 << ": ";
			for (int j = 0; j < n; j++)
			{
				cout << B[i][j] << " ";
			}
			cout << endl;
		}
    }
}
