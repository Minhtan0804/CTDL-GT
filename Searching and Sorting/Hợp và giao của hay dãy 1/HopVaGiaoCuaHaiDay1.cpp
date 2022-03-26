#include<bits/stdc++.h>
using namespace std;

void nhap(int A[], int n)
{
	for (int i = 0; i < n; i++) cin >> A[i];
}

void Tao(int A[], int B[], int n)
{
	for (int i = 0; i < n; i++) B[A[i]]++;
}

void HopVaGiao(int A[], int B[], int n, int m)
{
	int C[100005] = {0};
	Tao(A, C, n);
	Tao(B, C, m);

	for (int i = 0; i < 1e5+5; i++)
	{
		if(C[i]) cout << i << " ";
	}
	cout<< endl;

	for (int i = 0; i < 1e5+5; i++)
	{
		if(C[i] > 1) cout << i << " ";
	}
	cout<< endl;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{	
		int n, m; cin >> n >> m;
		int *A = new int[n]; nhap(A, n);
		int *B = new int[m]; nhap(B, m);
		HopVaGiao(A, B, n, m);
	}
}
