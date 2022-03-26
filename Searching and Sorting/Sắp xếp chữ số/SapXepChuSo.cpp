#include<bits/stdc++.h>
using namespace std;

void TaoChuSo(int A[], long long n)
{
	while(n)
	{
		A[n%10]++;
		n/=10;
	}
}

int main()
{
	int t;  cin >> t; 
	while(t--)
	{
		int n; cin >> n;
		int *A = new int[n];
		int B[10] = {0};
		for (int i = 0; i < n; i++)
		{
			cin>> A[i];
			TaoChuSo(B, A[i]);
		}
		
		for (int i = 0; i < 10; i++)
		{
			if (B[i] > 0) cout << i << " ";
		}
		cout << endl;
	}
}
