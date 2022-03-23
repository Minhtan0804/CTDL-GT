#include<bits/stdc++.h>
using namespace std;
long long n , k, mod = 1e9+7;

struct Matrix{
	long long F[15][15];
};

Matrix operator *(Matrix A, Matrix B)
{
	Matrix C;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			C.F[i][j] = 0;
			for (int k = 1; k <= n; k++)
				C.F[i][j] = (C.F[i][j] + (A.F[i][k] * B.F[k][j]) %mod) %mod;
		}
	}
	return C;
}

Matrix power(Matrix A, long long k)
{
	if (k == 1) return A;
	Matrix res = power(A, k/2);
	if (k % 2 == 0) return res*res;
	return res*res * A;
}

void  powerMatrix(Matrix A, long long k, long long n)
{
	Matrix ans = power(A, k);

	long long temp = 0;
	for (int i = 1; i <= n; i++)
	{
		temp += ans.F[i][n];
		temp %= mod;
	}
	cout << temp;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
//		int n, k; 
		cin >> n >> k;
		Matrix A;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++) cin >> A.F[i][j];
		}

		powerMatrix(A, k, n);



		cout << endl;
	}
	return 0;
}
