#include<bits/stdc++.h>
using namespace std;
bool last = false;
int n, k;
int A[100] = {0};

void sinh()
{
	int i = k;
	while(A[i] == A[i-1]+1 && i > 0) i--;
	if(i == 0) last = true;
	else {
		A[i]--;
		for (int j = k; j > i; j--) A[j] = n--;
	}
	
}

void xuat()
{
	for (int i = 1; i <= k; i++) cout << A[i] << " ";
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> k;
		for (int i = 1; i <= k; i++) cin >> A[i];
		sinh();
		if (!last) xuat();
		else{
			for (int i = 1; i <= k; i++) cout << n-k+i << " ";
		}
		cout << endl;
	}
}
