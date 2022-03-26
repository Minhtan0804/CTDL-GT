#include<bits/stdc++.h>
using namespace std;
int A[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int count = 0, i = 9;
		for (i; i >= 0; i--)
		{
			while(n >= A[i])
			{
				n -= A[i];
				count++;
			}
		}
		cout << count << endl;
	}
}

