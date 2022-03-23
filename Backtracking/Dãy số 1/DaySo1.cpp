#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int *A = new int[n];
		for (int i = 0; i < n; i++) cin >> A[i];
		int B[15][15];
		for (int i = 0; i < n; i++) B[0][i] = A[i];
		for (int i = 1; i < n; i++)
		{
			for (int j = 0; j < n-i; j++)
			{
				B[i][j] = B[i-1][j] + B[i-1][j+1];
			}
		}
		
		for (int i = 0; i < n; i++)
		{
			string str = "";
			cout << "[";
			for (int j = 0; j < n-i; j++) 
			{
				str += to_string(B[i][j]);
				str += " ";
				if(j == n-i-1)
				{
					int k = str.length();
					str.erase(k-1, 1);
				}
			}
			cout << str << "]" << "\n";
		}
	}
}

