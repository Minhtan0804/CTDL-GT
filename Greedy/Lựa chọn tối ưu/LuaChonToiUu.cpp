#include<bits/stdc++.h>
using namespace std;
struct task {
	int start, finish;
};

bool cmp (task a, task b)
{
	return a.finish < b.finish;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		task A[n];
		for (int i = 0; i < n; i++) cin >> A[i].start >> A[i].finish;

		sort(A, A+n, cmp);
		int maxx = 1, end = 0;
		for (int i = 1; i < n; i++)
		{
			if (A[i].start >= A[end].finish){
				maxx++;
				end = i;
			}
		}
		cout << maxx << endl;
	}
}	
