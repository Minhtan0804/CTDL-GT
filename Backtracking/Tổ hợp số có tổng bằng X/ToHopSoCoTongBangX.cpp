#include<bits/stdc++.h>
using namespace std;
int n, X, A[25], C[250], stop = false;

void xuat(int k)
{
	stop = true;
	cout << "[";
	for (int i = 1; i < k; i++) cout << C[i] << " ";
	cout  << C[k] << "] ";
}

void Try(int i, int t)
{
	for (int j = 1; j <= n; j++)
	{
		if(A[j] >= C[i-1] && t + A[j] <= X){
			C[i] = A[j]; t+= A[j];
			if (t == X) xuat(i);
			else Try(i+1, t);
			t -= A[j];
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n >> X;
		for (int i = 1; i <= n; i++) cin >> A[i];
		stop = false;
		Try(1, 0);
		if(!stop) cout << -1;
		cout << endl;
	}
}

