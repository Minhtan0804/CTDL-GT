#include<bits/stdc++.h>
using namespace std;
bool stop = false;
int Count, n, k, A[20], B[20];

bool check()
{
	Count++;
	for (int i = 1; i <= n; i++)
	{
		if(A[i] != B[i]) return false;
	}
	return true;
}

void sinh()
{
	int i = n-1;
	while(A[i] > A[i+1]) i--;
	if(i == 0) stop = true;
	else {
		int j = n;
		while(A[j] < A[i]) j--;
		swap(A[i], A[j]);
	}
	reverse(A+i+1, A+n+1);
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n;
		for (int i = 1; i <= n; i++) cin >> B[i];
		
		for (int i = 1; i <= n; i++) A[i] = i;
		Count = 0;
		while(!stop)
		{
			if(check()){
				cout << Count << endl;
				break;
			}
			sinh();
		}
		stop = false;
	}
}

