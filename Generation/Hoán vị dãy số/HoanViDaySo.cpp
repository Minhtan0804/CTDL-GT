#include<bits/stdc++.h>
using namespace std;
int n, A[10], B[10], C[10];

void xuat()
{
	for (int i = 1; i <= n; i++) cout << A[B[i]] << " ";
	cout << "\n";
}

void Try(int i)
{
	for (int j = 1; j <= n; j++)
	{
		if(!C[j]) {
			B[i] = j;
			C[j] = 1;
			if(i == n) xuat();
			else Try(i+1);
			C[j] = 0;
		}
	}
}

int main()
{
//	int t; cin >> t;
//	while(t--)
//	{
		cin >> n;

		for (int i = 1; i <= n; i++) cin >> A[i];

		sort(A+1, A+n+1);
		for (int i = 1; i <= n; i++) B[i] = i;
		Try(1);
		cout << endl;
//	}
}

