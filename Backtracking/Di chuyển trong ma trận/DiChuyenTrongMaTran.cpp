#include<bits/stdc++.h>
using namespace std;
int n, m, Count = 0;
int A[105][105];

void Try(int i, int j)
{
	if (i == n || j == m) Count++;
	else {
		if (i < n) Try(i+1, j);
		if (j < m) Try(i, j+1);
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> m;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++) cin >> A[i][j];
		}
		
		Count = 0;
		Try(1, 1);

		cout << Count << endl;
	}
}

