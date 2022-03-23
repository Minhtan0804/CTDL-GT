#include<bits/stdc++.h>
using namespace std;
int A[30], n, k, s, Count;

void Sum()
{
	int t = 0, i;
	for (int i = 1; i <= k; i++) t+= A[i];
	if (t == s) Count++;
	
}

void Try(int i)
{
	int j;
	for (int j = A[i-1]+1; j <= n-k+i; j++)
	{
		A[i] = j;
		if(i == k) Sum();
		else Try(i+1);
	}
}

int main()
{
	while(true)
	{
		cin >> n >> k >> s;
		if (!n && !k && !s) break;
		A[0] = 0;
		Count = 0;
		Try(1);
		cout << Count << endl;
	}
}

