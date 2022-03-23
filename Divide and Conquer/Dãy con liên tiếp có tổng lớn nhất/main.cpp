#include<bits/stdc++.h>
using namespace std;

int maxSumArr(int A[], int n)
{
	int maxx = INT_MIN, max_now = 0;
	for (int i = 0; i < n; i++)
	{
		max_now += A[i];
		if(max_now < 0) max_now = 0;
		else maxx = max(maxx, max_now);
	}
	return maxx;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int *A = new int[n];
		for (int i = 0; i < n; i++) cin >> A[i];

		cout << maxSumArr(A, n);

		cout << endl;
	}
}

/*
#include<bits/stdc++.h>
using namespace std;

void qhd(int A[], int n)
{
	int s = 0, e = 0;
	for (int i = 0; i < n; i++)
	{
		e = max(A[i], e + A[i]);
		s = max (s, e);
	}
	cout << s;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int *A = new int[n];
		for (int i = 0; i < n; i++) cin >> A[i];
		
		qhd(A, n);

		cout << endl;
	}
	return 0;
}

*/

