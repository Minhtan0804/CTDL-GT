#include<bits/stdc++.h>
using namespace std;
int A[100], B[100], n, s, Count= 0; 

void in()
{
	for (int i = 1; i <= n; i++)
	{
		if (A[i] == 1) cout << B[i] << "                    ";
	}
	cout << endl;
	Count++;
}

void check()
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (A[i] == 1) sum += B[i];
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
	cin >> n >> s;

	for (int i = 1; i <= n; i++) cin >> B[i];
	Try(1);
	cout << Count;
}

