#include<bits/stdc++.h>
using namespace std;
int n, k, t, C[50];
string A[50], B[50];

void xuat()
{
	for (int i = 1; i <= k ; i++) cout << B[C[i]] << " ";
	cout << endl;
}

bool checkArr(string str)
{
	for (int i = 1; i < t; i++)
	{
		if(B[i] == str) return false;
	}
	return true;
}

void Try(int i)
{
	for (int j = C[i-1]+1; j <= n-k+i; j++)
	{
		C[i] = j;
		if(i == k) xuat();
		else Try(i+1);
	}
}

int main()
{
	t = 1;
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		cin >> A[i];
		if(checkArr(A[i])) B[t++] = A[i];
	}
	n = t-1;
	sort(B+1, B+n+1);
	for (int i = 1; i <= n; i++) C[i] = i;
	Try(1);
}

