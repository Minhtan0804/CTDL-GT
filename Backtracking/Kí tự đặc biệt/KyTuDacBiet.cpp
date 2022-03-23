#include<bits/stdc++.h>
using namespace std;

char Try(string str, long long n)
{
	long long x = str.length();
	if(n < x) return str[n];
	while(x*2 <= n) x*=2;
	if(x == n) return Try(str, n-1);
	return Try(str, n-x-1);
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string str; cin >> str;
		long long n; cin >> n;
		
		cout << Try(str, n-1);
		cout << endl;
	}
}

