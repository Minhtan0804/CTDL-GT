#include<bits/stdc++.h>
using namespace std;

int binarySearch(int A[], int l, int r, int k)
{
	if(l <= r){
		int mid = r + (l-r)/2;
		
		if(A[mid] == k) return mid;
		
		if(A[mid] > k) return binarySearch(A, l, mid-1, k);
		return binarySearch(A, mid+1, r, k);
	}
	return -1;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, k; cin >> n >> k;
		int *A = new int[n];
		for (int i = 0; i < n; i++) cin >> A[i];
		
		if(binarySearch(A, 0, n-1, k) < 0) cout << "NO";
		else cout << binarySearch(A, 0, n-1, k)+1;

		cout << endl;
	}
}

