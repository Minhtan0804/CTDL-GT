#include<bits/stdc++.h>
using namespace std;
int sum = 0;

void balance(int A[], int n)
{
	int k = 0;
	bool notBalance = true;
	for (int i = 0; i < n; i++)
	{
		if(2*k == sum - A[i])
		{
			cout << i+1;
			notBalance = false;
			break;
		}
		k += A[i];
	}
	if(notBalance) cout << -1;
	sum = 0;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int *A = new int[n];

		for (int i = 0; i < n; i++)
		{
			 cin >> A[i];
			 sum += A[i];
		}
		
		balance(A, n);

		cout << endl;
	}
}

