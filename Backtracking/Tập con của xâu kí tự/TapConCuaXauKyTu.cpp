#include<bits/stdc++.h>
using namespace std;
int n, A[20]; 
string str;
vector<string> res;

void nho()
{
	string s = "";
	for (int i = 1; i <= n; i++)
	{
		if (A[i]) s += str[i-1];
	}
	res.push_back(s);
}

void Try(int i)
{
	for (int j = 0; j <= 1; j++)
	{
		A[i] = j;
		if (i == n) nho();
		else Try(i+1);
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
	    res.clear();
		memset(A, 0, sizeof(A));
		cin >> n >> str;
		
		Try(1);
		
		sort(res.begin(), res.end());
		for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
		cout << endl;
	}
}
