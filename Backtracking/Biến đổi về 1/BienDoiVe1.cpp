#include<bits/stdc++.h>
using namespace std;
int A[100005] = {0};

void toOne()
{
	for (int i = 2; i <= 1e5; i++)
	{
		int h = INT_MAX, k = INT_MAX;
		if(i % 2 == 0) h = A[i/2]+1;
		if(i % 3 == 0) k = A[i/3]+1;
		A[i] = min(min(h, k), A[i-1]+1);
	}
}

int main()
{
	toOne();
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		
		cout << A[n] << endl;
	}
}

