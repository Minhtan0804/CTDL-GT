#include<bits/stdc++.h>
using namespace std;
int A[100], B[100], n, s, Count= 0; 

void in()
{
	cout << "[";
	string str;
	for (int i = 1; i <= n; i++)
	{
		if (A[i] == 0) str += to_string(B[i]) + " ";
	}
	str.erase(str.length()-1, 1);
	cout << str << "] ";
	Count++;
}

void check()
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (A[i] == 0) sum += B[i];
	}
	
	if(sum == s) in();
}

void Try(int i)
{
	for (int j = 0; j <= 1; j++)
	{
		A[i] = j;
		if (i == n) check();
		else Try(i+1);
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		count = 0;
		cin >> n >> s;
	
		for (int i = 1; i <= n; i++) cin >> B[i];
		sort(B+1, B+n+1);
		Try(1);
		if (Count == 0) cout << -1;
		cout << endl;
	}
}

