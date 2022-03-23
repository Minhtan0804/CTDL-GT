#include<bits/stdc++.h>
using namespace std;
int n, A[20], B[20];

void xuat()
{
	for (int i = 1; i <= n; i++)
	{
		if(A[i]) cout << B[i] << " ";
	}
	cout << endl;
}

bool prime(int k)
{
	if (k < 2) return false;
	for (int i = 2; i <= sqrt(k); i++)
	{
		if(k % i == 0) return false;
	}
	return true;
}

bool check()
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if(A[i]) sum+= B[i];
	}
	if (prime(sum)) return true;
	return false;
}

void Try(int i)
{
	for (int j = 0; j < 2; j++)
	{
		A[i] = j;
		if(i == n){
			if (check()){
				xuat();
			}
		}else Try(i+1);
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		memset(A, 0, sizeof(A));
		cin >> n;
		for (int i = 1; i <= n; i++) cin >> B[i];
		sort(B+1, B+n+1, greater<int>());
		Try(1);
	}
}

