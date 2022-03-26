#include<bits/stdc++.h>
using namespace std;
int B[1000000] = {0};

int main()
{
//	int t; cin >> t;
//	while(t--)
	{
		int n; cin >> n;
		int *A = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> A[i]; B[A[i]]++;
		}
		
		for (int i = 0; i < n; i++)
		{
			if(B[A[i]] > 0){
				cout << A[i] << " ";
				B[A[i]] = 0;
			}
		}

		cout << endl;
	}
}

