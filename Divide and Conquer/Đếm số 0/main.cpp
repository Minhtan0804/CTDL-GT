#include<bits/stdc++.h>
using namespace std;
int countt = 0;

void countZero(int A[], int l, int r)
{
	if ( l > r) return;
	int k = l +  (r-l)/2;
	if(A[k] == 0){
		countt += k-countt;
		return countZero(A, k+1, r);
	}else return countZero(A, l, k-1);
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		countt = 0;
		int n; cin >> n;
		int *A = new int[n+1];

		for (int i = 1; i <= n; i++) cin >> A[i];

		countZero(A, 1, n);

		cout << countt << endl;
	}
}

