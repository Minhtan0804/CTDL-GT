#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int k; string a, b; cin >> k >> a >> b;
		
		int len_a = a.length(), len_b = b.length();
		int diff = abs(len_a-len_b), n = max(len_a, len_b);

		string s, sum;
		for (int i = 1; i <= diff; i++) s+="0";

		if(len_a < len_b) a = s + a;
		else b = s + b;
		
		int cur = 0;
		
		for (int i = n-1; i >= 0; i--)
		{
			int h = (a[i] - '0') + (b[i] - '0') + cur;
			cur = h/k;
			h %= k;
			sum += (char)(h + '0');
		}
		
		if(cur > 0) sum += (char)(cur+'0');
		
		reverse(sum.begin(), sum.end());

		cout  << sum << endl;
	}
}

