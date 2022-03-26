#include<bits/stdc++.h>
using namespace std;

void phanSo(long long a, long long b)
{
	if(b % a == 0){
		cout << "1/" << b/a;
		return;
	}
	
	long long k = b/a+1;
	cout << "1/" << k << " + ";
	return phanSo(a*k-b, b*k);
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		long long a, b; cin >> a >> b;
		phanSo(a, b);
		cout << endl;
	}
}

