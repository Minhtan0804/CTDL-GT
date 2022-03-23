#include<bits/stdc++.h>
using namespace std;
bool stop = false;
int Count, n, k, A[20], B[20];

bool check()
{
	Count++;
	for (int i = 1; i <= k; i++)
	{
		if(A[i] != B[i]) return false;
	}
	return true;
}

void sinh()
{
	int i = k;
	while(A[i] == n-k+i) i--;
	if(i == 0) stop = true;
	else {
		A[i]++;
		for (int j = i+1; j <= k; j++) A[j] = A[j-1]+1;
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> k;
		for (int i = 1; i <= k; i++) cin >> B[i];
		
		for (int i = 1; i <= n; i++) A[i] = i;
		Count = 0;
		while(!stop)
		{
			if(check()){
				cout << Count << endl;
				stop = true;
			}
			sinh();
		}
		stop = false;
	}
}

