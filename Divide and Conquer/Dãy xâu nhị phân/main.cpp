#include<bits/stdc++.h>
using namespace std;
long long A[100];

void fibo()
{
	A[1] = 1;
	A[2] = 1;
	for (int i = 3; i <= 92; i++) A[i] = A[i-1] + A[i-2];
}

void stringFibo(int n, long long k)
{
	if (n >= 3){
		if(k <= A[n-2]) return stringFibo(n-2, k);
		else return stringFibo(n-1, k-A[n-2]);
	}
	if(n == 1){
		cout << "0";
	}else{
		cout << "1";
	}
}

int main()
{
	fibo();
	int t; cin >> t;
	while(t--)
	{
		int n; long long k; cin >> n >> k;
		stringFibo(n, k);
		
		cout << endl;
	}
}

