#include<bits/stdc++.h>
using namespace std;
int A[15], B[15], n;
string str;

void in()
{
	for (int i = 1; i <= n; i++) cout << str[A[i]-1];
	cout << " ";
}

void Try(int i)
{
	for (int j = 1; j <= n; j++)
	{
		if(!B[j]){
			A[i] = j;
			B[j] = 1;
			if (i == n) in();
			else Try(i+1);
			B[j] = 0;
		}
		
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> str;
		n = str.length();
		Try(1);
		cout << endl;
	}
}

