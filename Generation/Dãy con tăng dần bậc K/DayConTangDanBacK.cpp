#include<bits/stdc++.h>
using namespace std;
bool stop = false;
int A[105], B[105];
int n, k;

bool check()
{
	for (int i = 1; i < k; i++)
	{
		if (A[B[i]] > A[B[i+1]]) return false;
	}
	return true;
}

void sinh()
{
	int i = k;
	while(B[i] == n-k+i) i--;
	if (i == 0) stop = true;
	else{
		B[i]++;
		for(int j = i+1; j <= k; j++) B[j] = B[j-1]+1;
	}
}

int main()
{
	cin >> n >> k;
	int count = 0;

	for (int i = 1; i <= n; i++) cin >> A[i];
	for (int i = 1; i <= n; i++) B[i] = i;

	while(!stop)
	{
		if (check()) count++;
		sinh();
	}

	cout<< count << endl;
}

