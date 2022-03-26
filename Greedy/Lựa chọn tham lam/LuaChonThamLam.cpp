#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, s; cin >> n >> s;
	if (s == 0 && n == 1){
		cout << "0 0";
		return 0;
	}
	
	if (s == 0 || s > 9*n){
		cout << "-1 -1";
		return 0;
	}
	
	int A[n+1] = {0}, i = n;
	A[1] = 1; s--;
	
	while(s >= 9)
	{
		A[i--] = 9;
		s -= 9;
	}
	A[i]+=s;
	
	for (int i = 1; i <= n; i++) cout << A[i];
	
	cout << " ";
	
	for (int i = n; i > 1; i--)
	{
		if(A[i] != 9){
			A[i]++;
			A[1] = 0;
			break;
		}
	}
	
	
	for (int i = n; i > 0; i--) 
		cout << A[i];
	
}
