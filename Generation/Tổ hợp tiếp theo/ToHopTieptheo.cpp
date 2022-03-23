#include<bits/stdc++.h>
using namespace std;
bool Ok = false;
int n, k, A[100] = {0}, B[100] = {0};

int next()
{
	int count = 0;
	for (int i = 1; i <= k; i++)
	{
		B[A[i]]++;
	}
	for (int i = 1; i <= k; i++){
		if (B[A[i]] == 1) count++;
	}
	return count;
}

void sinh()
{
	int i = k;
	while(A[i] == n-k+i) i--;
	if(i == 0) Ok = true;
	else{
		A[i]++;
		for (int j = i+1; j <= k; j++) A[j] = A[j-1]+1;
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		memset(B, 0, sizeof(B));
		cin >> n >> k;
		for (int i = 1; i <= k; i++) {cin >> A[i]; B[A[i]]++;}
		sinh();
//		for (int i = 1; i <= k; i++) cout << A[i] << " ";
		if (Ok) cout << k;
		else cout << next();
		Ok = false;
		cout << endl;
	}
	return 0;
}

