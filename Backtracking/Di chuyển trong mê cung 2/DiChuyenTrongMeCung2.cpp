#include<bits/stdc++.h>
using namespace std;
int n, A[15][15];
bool ok = false;

void Try(int i, int j, string str)
{
	if(i == n && j == n)
	{
		cout << str << " ";
		ok = true;
		return;
	}

	if(i < n && A[i+1][j] == 1){
		A[i+1][j] = 0;
		Try(i+1, j, str+"D");
		A[i+1][j] = 1;
	}
	if(j > 1 && A[i][j-1] == 1){
		A[i][j-1] = 0;
		Try(i, j-1, str+"L");
		A[i][j-1] = 1;
	}
	if(j < n && A[i][j+1] == 1){
		A[i][j+1] = 0;
		Try(i, j+1, str+"R");
		A[i][j+1] = 1;
	}
	if(i > 1 && A[i-1][j] == 1){
		A[i-1][j] = 0;
		Try(i-1, j, str+"U");
		A[i-1][j] = 1;
	}
	return;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n;
		ok = false;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				cin >> A[i][j];
			}
		}

		if(A[1][1] == 0|| A[n][n] == 0) cout << -1;
		else{
			A[1][1] = 0;
			Try(1, 1, "");
			if(!ok) cout << -1;
		}
		cout << endl;
	}
}

