#include<bits/stdc++.h>
using namespace std;
int n, A[1005];

void sinh()
{
	int i = n-1;
	while(A[i] > A[i+1] && i > 0) i--;
	if (i == 0)
	{
//		A[1] = n
	}else{
		int j = n;
		while(A[j] < A[i]){
			j--;
		}
		swap(A[i], A[j]);
	}
	reverse(A+i+1, A+n+1);
}

void xuat()
{
	for (int i = 1; i <= n; i++) cout << A[i] << " ";
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n;
		for (int i = 1; i <= n; i++) cin >> A[i];
		sinh();
		xuat();
		cout << endl;
	}
}
