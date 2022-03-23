#include<bits/stdc++.h>
using namespace std;
bool prime[500];
int A[15], B[500][500];
int n, p, s, h = 1;

void nho()
{
	for (int i = 1; i <= n; i++) B[h][i] = A[i];
	h++;
}

bool check(){
	int sum = 0;
	for (int i = 1; i <= n; i++) sum += A[i];
	if(sum == s) return true;
	return false;
}

void Prime()
{
	prime[1] = false;
	prime[0] = false;
	for (int k = 2; k < 500; k++) prime[k] = true;
	
	for (int i = 2; i < 500; i++)
	{
		if(prime[i] == true){
			for (int j = i*i; j < 500; j+=i) prime[j] = false;
		}
	}
}

void Try(int i, int k)
{
	for (int j = k; j <= s; j++)
	{
		if(prime[j])
		{
			A[i] = j;
			if(i == n){
				if(check()) nho();
			}else Try(i+1, j+1);
		}
	}
}


int main()
{
	Prime();
	int t; cin >> t;
	while(t--)
	{
		memset(A, 0, sizeof(A));
		h = 1;
		cin >> n >> p >> s;
		if(n == 1) cout << s;
		else Try(1, p+1);
		
		cout << --h << endl;
		for (int i = 1; i <= h; i++)
		{
			for (int j = 1; j <= n; j++) cout << B[i][j] << " ";
			cout << endl;
		}
//		cout << endl;
	}
}


