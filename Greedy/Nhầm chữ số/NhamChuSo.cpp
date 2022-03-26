#include<bits/stdc++.h>
using namespace std;

long long x5fix6(string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if(str[i] - '6' == 0) str[i] -= 1;
	}
	return stoi(str);
}

long long x6fix5(string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if(str[i] - '5' == 0) str[i] += 1;
	}
	return stoi(str);
}

int main()
{
//	int t; cin >> t;
//	while(t--)
	{
		string a, b; cin >> a >> b;
		
		cout << x5fix6(a) + x5fix6(b) << " ";
		cout << x6fix5(a) + x6fix5(b)<< endl;
	}
}

