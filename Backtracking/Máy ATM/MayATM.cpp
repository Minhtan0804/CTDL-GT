#include<bits/stdc++.h>
using namespace std;
int n, s, A[40], result = 1000;

void back_tracking(int i, int t, int x)
{
	if (t > s || x > result) return;
	if (i == n){
		if (t == s) result = min(result, x);
		return;
	}
	back_tracking(i+1, t, x);
	back_tracking(i+1, t+A[i], x+1);
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> s;
		for (int i = 0; i < n; i++) cin >> A[i];
		
		back_tracking(0, 0, 0);
		if (result == 1000) cout << -1;
		else cout << result;
		cout << endl;
		result = 1000;
	}
}

