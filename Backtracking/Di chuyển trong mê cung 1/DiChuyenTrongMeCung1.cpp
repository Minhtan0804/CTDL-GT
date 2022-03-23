#include<bits/stdc++.h>
using namespace std;
bool check = false;
int n, k = 1;
int A[105][105], B[30];

void xuat()
{
	check =true;
	for (int i = 1; i <= 2*n-2; i++)
	{
		if(B[i]) cout << "D";
		else cout << "R";
	}
	cout << " ";
}

void Try(int i, int j, int k)
{
	if (A[1][1] != 1) return;
	if (i == n && j == n) xuat();
	else {
		if (A[i+1][j]){
		B[k] = 1;
		Try(i+1, j, k+1);
		}
		if (A[i][j+1]){
			B[k] = 0;
			Try(i, j+1, k+1);
		}
	}
}


int main()
{
	int t; cin >> t;
	while(t--)
	{
		for (int i = 0; i < 15; i++)
			for (int j = 0; j < 15; j++) A[i][j] = 0;
		
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++) cin >> A[i][j];
		}
		
		Try(1, 1, 1);
		
		if(!check) cout << -1 << endl;

		cout << endl;
		check = false;
	}
}

