#include<bits/stdc++.h>
using namespace std;
int n, A[20];

void xuat()
{
	cout << 8;
	for (int i = 1; i <= n; i++)
	{
		if(A[i] == 1) cout << 8;
		else cout << 6;
	}
	cout << 6 << "\n";
}

bool check()
{
	if (A[1] == 1 || (A[n] == A[n-1] == A[n-2] == A[n-3] == 0)) return false;
	int countEight = 0, countSix = 0;
	for (int i = 1; i <= n; i++)
	{
		if(A[i] == 1){
			countEight++;
			countSix = 0;
		}else{
			countSix++;
			countEight = 0;
		}
		if(countEight > 1 || countSix > 3) return false;
	}
	return true;
}

void Try(int i)
{
	for (int j = 0; j <= 1; j++)
	{
		A[i] = j;
		if (i == n){
			if(check()) xuat();
		}else Try(i+1);
	}
}

int main()
{
//	int t; cin >> t;
//	while(t--)
//	{
		cin >> n;
		n -=2;
		Try(1);
//	}
}

