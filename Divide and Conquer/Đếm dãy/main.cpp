#include<bits/stdc++.h>
using namespace std;
int mod = 1e9+7;

long long powerMod(int n, int k){
	if (k == 0) return 1;
	long long x = powerMod(n, k/2);
	if (k % 2 == 0) return x*x %mod;
	return n * (x*x %mod) %mod;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << powerMod(2, n-1) << endl;
	}
	return 0;
}

