#include<bits/stdc++.h>
using namespace std;
int n, w, val[105], wei[105];
int fopt, xopt[105], A[105];

void update()
{
	int sum = 0;
	for (int i = 1; i <= n; i++) sum += val[i]*A[i];
	
	if(sum > fopt){
		fopt = sum;
		for (int i = 1; i <= n; i++) xopt[i] = A[i];
	}
}

bool check()
{
	int weight = 0;
	for (int i = 1; i <= n; i++) weight += wei[i]*A[i];
	
	if(weight > w) return false;
	return true;
}

void Try(int i)
{
	for (int j = 0; j <= 1; j++)
	{
		A[i] = j;
		if(i == n){
			if(check()) update();
		}else Try(i+1);
	}
}

int main()
{
//	int t; cin >> t;
//	while(t--)
	{
		cin >> n >> w;
		for (int i = 1; i <= n; i++) cin >> val[i];
		for (int i = 1; i <= n; i++) cin >> wei[i];
		
		fopt = INT_MIN;
		Try(1);
		
		cout << fopt << endl;
		for (int i = 1; i <= n; i++) cout << xopt[i] << " ";
		cout << endl;
	}
	return 0;
}

