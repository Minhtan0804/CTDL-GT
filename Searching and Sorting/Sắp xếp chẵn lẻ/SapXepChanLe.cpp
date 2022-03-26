#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	int *A = new int[n];

	for (int i = 0; i < n; i++) cin >> A[i];
	
	int B[n], C[n];
	for (int i = 0; i < n; i+=2) B[i/2] = A[i];
	for (int i = 1; i < n; i+=2) C[i/2] = A[i];
	
	if(n % 2 != 0)
	{
		sort(B, B+n/2+1);
	}else{
		sort(B, B+n/2);
	}
	sort(C, C+n/2);
	for (int i = 0; i < n/2; i++){
		cout << B[i] << " " << C[n/2-i-1] << " ";
	}
	
	if(n % 2 != 0) cout << B[n/2];
	
	cout << endl;
}
