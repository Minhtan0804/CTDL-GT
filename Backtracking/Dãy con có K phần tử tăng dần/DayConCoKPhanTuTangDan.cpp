#include<bits/stdc++.h>
using namespace std;
bool Ok = false;
int n, k, B[20], A[105] = {0};

void xuat()
{
    for (int i = 1; i <= k; i++) cout << B[A[i]] << " ";
    cout << "\n";
}


void Try(int i)
{
	for (int j = A[i-1]+1; j <= n-k+i; j++)
	{
		A[i] = j;
		if(i == k) xuat();
		else Try(i+1);
	}
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= n; i++) cin >> B[i];
        sort(B+1, B+n+1);
        for (int i = 1; i <= n; i++) A[i] = i;
        Try(1);
    }
    return 0;
}
