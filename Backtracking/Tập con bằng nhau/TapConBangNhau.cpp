#include<bits/stdc++.h>
using namespace std;
int n, A[105], sum = 0;

bool isSumSub()
{
	if(sum % 2 != 0) return false;
	int f[sum/2+1] = {0};
	for (int i = 0; i < n; i++)
	{
		for (int j = sum/2; j >= A[i]; j--)
		{
			if(f[j-A[i]] == 1 || j == A[i]) f[j] = 1;
		}
	}
	return f[sum/2];
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n;
		sum = 0;

		for (int i = 0; i < n; i++)
		{
			cin >> A[i];
			sum += A[i];
		}
		if (isSumSub()) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}

