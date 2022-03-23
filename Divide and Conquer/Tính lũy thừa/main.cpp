#include<bits/stdc++.h>
using namespace std;
int mod = 1e9+7;

long long powMod(long long a, long long b)
{
	if (b == 0) return 1;
	long long x = powMod(a, b/2);
	if (b % 2 == 0) return x*x %mod;
	else return a * (x*x %mod) %mod;
}

int main()
{
	while(true)
	{
		long long a, b; cin >> a >> b;
		if (!a && !b) break;
		if (a == 1) cout << 1;
		else cout << powMod(a, b);
		cout << endl;
	}
}

