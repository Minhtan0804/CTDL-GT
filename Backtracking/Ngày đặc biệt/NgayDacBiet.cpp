#include<bits/stdc++.h>
using namespace std;
int n = 8, A[20];

void xuat()
{
	for (int i = 1; i <= n; i++)
	{
		if(i == 3 || i == 5) cout << "/";
		if(A[i] == 1) cout << 2;
		else cout << 0;
		
	}
	cout << "\n";
}

bool check()
{
	if ((A[1] == 0 && A[2] == 0) || (A[3] == 0 && A[4] == 0) || A[3] == 1 || A[5] == 0) return false;	
	return true;
}

void Try(int i)
{
	for (int j = 0; j <= 1; j++)
	{
		A[i] = j;
		if (i == n){
			if(check())
			{
				xuat();
			}
		}else Try(i+1);
	}
}

int main()
{
		Try(1);
}

