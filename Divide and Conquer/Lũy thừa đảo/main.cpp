#include<bits/stdc++.h>
using namespace std;
int mod = 1e9+7;

long long PowerMod(long n, long k){
	if (k == 0) return 1;
	long long x = PowerMod(n, k/2);
	if (k % 2 == 0) return x*x %mod;
	return n * (x*x %mod) %mod;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;
		long m = n, k = 0;
		while(m){
			k = k*10 + m % 10;
			m/=10;
		}
		cout << PowerMod(n, k);
		cout << endl;
	}
	return 0;
}

