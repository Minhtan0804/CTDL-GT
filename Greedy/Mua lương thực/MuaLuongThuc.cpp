#include<bits/stdc++.h>
using namespace std;

int buyFood(int n, int s, int m)
{
	if(n <= m) return -1;
	if (s > 6 && (n-m)*6 < m) return -1;
	int k = s*m/n;
	if(k*n == s*m) return k;
	return k+1;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, s, m; cin >> n >> s >> m;
		cout << buyFood(n, s, m) << endl;
	}
}

