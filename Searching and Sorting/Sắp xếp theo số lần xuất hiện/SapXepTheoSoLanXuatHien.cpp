#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int *A = new int[n];
		int B[100005] = {0};

		for (int i = 0; i < n; i++)
		{
			 cin >> A[i];
			 B[A[i]]++;
		}
		
		sort(A, A+n);
//		for (int i = 0; i < n; i++) cout << A[i] << " ";
//		cout << "\n\n";
		for (int i = 0; i < n-1; i++)
		{
			for (int j = i+1; j < n; j++)
			{
				if (B[A[j]] > B[A[i]] || (B[A[j]] == B[A[i]]  && A[j] < A[i]))
				{
					swap(A[j], A[i]);
				}
			}
		}
		for (int i = 0; i < n; i++) cout << A[i] << " ";
		cout << endl;
	}
}

