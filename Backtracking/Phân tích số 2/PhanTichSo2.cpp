#include<bits/stdc++.h>
using namespace std;
int n, A[100], k = 1, countt = 0;
int B[200][20];
bool stop = false;

void xuat(int j)
{
	cout << "(";
	string str;
	for (int i = 1; i <= n; i++)
	{
		int h = B[j][i];
		if(B[j][i] == 0) break;
		str += to_string(h) + " ";
	}
	str.erase(str.length()-1, 1);
	cout << str;
	cout << ") ";
}

void sinh()
{
	int i = k, a, b, c;
	while(A[i]==1) i--;
	if (i == 0) stop = true;
	else{
		A[i]--; a = k-i+1;
		k = i;
		b = a/A[i]; c = a % A[i];
		if (b > 0) {
			for (int j = i+1; j <= i+b; j++) A[j] = A[i];
			k+=b;
		}
		if (c > 0) {
			k++; A[k] = c;
		}
	}
	countt++;
}

void nho()
{
	int i = 1;
	while(i <= k)
	{
		B[countt][i] = A[i]; 
		i++;
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		countt = 0;
		for (int i = 0; i <= 200; i++)
			for (int j = 0; j <= n; j++)
				B[i][j] = 0;
				
		cin >> n; 
		
		A[1] = n;
		while(!stop)
		{
			nho();
			sinh();
		}
		
		cout << countt << endl;
		cout << "(" << n << ") ";
		for (int i = 1; i < countt; i++) xuat(i);
		k = 1; stop = false;
		
		cout << endl;
	}
}

