#include<bits/stdc++.h>
using namespace std;

int reString(string str)
{
	int A[26] = {0}, maxx = INT_MIN;
	for (int i = 0; i < str.length(); i++)
	{
		int k = str[i]-'a';
//		return k;
		A[k]++;
		maxx = max(A[k], maxx);
	}
	if(maxx > (str.length()+1)/2) return -1;
	return 1;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string str; cin >> str;
		cout << reString(str) << endl;
	}
}

