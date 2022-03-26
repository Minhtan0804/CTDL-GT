#include <bits/stdc++.h>
using namespace std;
int mod = 1e9+7;

long minCost(long long arr[], long long n)
{
	priority_queue<long long, vector<long long>, greater<long long> > pq(arr, arr + n);

	long res = 0;

	while (pq.size() > 1) {
		long long first = pq.top();
		pq.pop();
		long long second = pq.top();
		pq.pop();

		pq.push((first + second) % mod);
		res += (first + second) % mod;
		res %= mod;
	}

	return res;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		long long n; cin >> n;
		long long *A = new long long[n];
		for (long long i = 0; i < n; i++) cin >> A[i];
		cout  << minCost(A, n) << endl;
	}
	return 0;
}

