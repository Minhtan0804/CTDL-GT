#include<bits/stdc++.h>
using namespace std;
int A[15], B[15], C[15][15], D[50][50], n, k, dem = 0;

void check()
{
	int t = 0;
	for (int i = 1; i <= n; i++) t+= C[i][A[i]];
	if (t == k)
	{
		for (int i = 1; i <= n; i++) D[dem][i] = A[i];
		dem++;
	}
}

void in()
{
	for (int i = 0; i < dem; i++)
	{
		for (int j = 1; j <= n; j++) cout << D[i][j] << " ";
		cout << endl;
	}
}

void Try(int i)
{
	for (int j = 1; j <= n; j++)
	{
		if(!B[j]){
			A[i] = j;
			B[j] = 1;
			if (i == n) check();
			else Try(i+1);
			B[j] = 0;
		}
	}
}

int main()
{
	cin >> n >> k;
	for(int i=0;i<=n;i++) B[i] = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++) cin >> C[i][j];
	}
	Try(1);
	cout << dem << endl;
	in();
}

