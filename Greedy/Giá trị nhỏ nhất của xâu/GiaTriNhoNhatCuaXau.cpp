#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		string str; cin >> str;
		
		int F[26] = {0};
		
		for (int i = 0; i < str.length(); i++) F[str[i]-'A']++;
		sort(F, F+26);
		
		while (n)
		{
			if(F[25] >= F[24]){
				F[25]--;
				n--;
			}
			else sort(F, F+26);
		}
		
		int long sum = 0;
		for (int i = 0; i < 26; i++) sum += F[i]*F[i];
		
		cout << sum << endl;
	}
	return 0;
}
