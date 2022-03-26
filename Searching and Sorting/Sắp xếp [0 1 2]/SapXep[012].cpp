#include<bits/stdc++.h>
using namespace std;
int n;

void in(int A[], int k)
{
	for (int i = 0; i < n; i++)
	{
		if(A[i] == k) cout << A[i] << " ";
	}
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
		cin >> n;
    	int *A = new int[n];
    	for (int i = 0; i < n; i++) cin >> A[i];
    	in(A, 0);
    	in(A, 1);
    	in(A, 2);
	}
}
