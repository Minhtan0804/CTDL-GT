#include<bits/stdc++.h>
using namespace std;
int n, k;
int A[100] = {0};

void sinh()
{
	int i = k;
	while(A[i] == n-k+i && i > 0) i--;
	if(i == 0) A[i] = 0;
	else A[i]++;
	for (int j = i+1; j <= k; j++) A[j] = A[j-1] + 1;
}

void xuat()
{
	for (int i = 1; i <= k; i++) cout << A[i] << " ";
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> k;
		for (int i = 1; i <= k; i++) cin >> A[i];
		sinh();
		xuat();
		cout << endl;
	}
}
