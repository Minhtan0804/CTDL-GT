#include<bits/stdc++.h>
using namespace std;
int C[20][20], A[20], B[20] = {0}, n, fopt = 1e9, cmin = 1e9, cost = 0;

void Try(int i)
{
	for (int j = 1; j <= n; j++) {
		if (B[j] == 0){
			A[i] = j; B[j] = 1;
			cost += C[A[i-1]][A[i]];
			if (i == n) fopt = min(fopt, cost);
			else if (cost + cmin * (n-i+1) < fopt) Try(i+1);
			
			cost -= C[A[i-1]][A[i]];
			B[j] = 0;
		}
	}
}

int dem(string str1, string str2)
{
	int i = 0, j = 0, countt = 0;
	while(i < str1.size() && j < str2.size())
	{
		if (str1[i] == str2[j]){
			i++; j++; countt++;
		}else if (str1[i] < str2[j]) i++;
		else j++;
	}
	return countt;
}

int main()
{
//	int t; cin >> t;
//	while(t--)
	{
		cin >> n;
		string tmp;
		vector<string> vs;
		for (int i = 0; i < n; i++)
		{
			cin >> tmp;
			vs.push_back(tmp);
		}
		
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if(i == j) C[i][j] = 1e9;
				else C[i][j] = dem(vs[i-1], vs[j-1]);
				cmin = min(cmin, C[i][j]);
			}
		}
		
		Try(1);
		cout << fopt;
		cout << endl;
	}
}

