#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int *S = new int[n];
		int *F = new int[n];

		for (int i = 0; i < n; i++) cin >> S[i];
		for (int i = 0; i < n; i++) cin >> F[i];
		
		for (int i = 0; i < n-1; i++)
		{
			for (int j = i+1; j < n; j++)
			{
				if (F[i] > F[j] || F[i] == F[j] && S[i] > S[j]){
					swap(S[i], S[j]);
					swap(F[i], F[j]);
				}
			}
		}
		
		int maxx = 1, end = 0;
		for (int i = 1; i < n; i++)
		{
			if(S[i] >= F[end]){
				maxx++;
				end = i;
			}
		}

		cout << maxx << endl;
		
		/*
		struct task {
			int strart, finish;
		};
		task A[n];
		for (int i = 0; i < n; i++) cin >> A[i].start;
		for (int i = 0; i < n; i++) cin >> A[i].finish;
		
		cmp(task a, task b){
			
		}
		*/
	}
}



