#include<bits/stdc++.h>
using namespace std;

void doubleArr(int n, long long k)
{
	if(k % 2 != 0){
		cout << 1;
		return;
	}
	if(k == pow(2, n-1)){
		cout << n;
		return;
	}else if(k < pow(2, n-1)) return doubleArr(n-1, k);
	else return doubleArr(n-1, k-pow(2, n-1));
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n;
		long long k; 
		cin >> n >> k;
		
		doubleArr(n, k);
		cout << endl;
	}
}

