#include<bits/stdc++.h>
using namespace std;
bool biggest = false;
int n, k, A[1005];
string str;

void next()
{
	for (int i = 0; i < n; i++) A[i+1] = str[i]-'0';
}

void sinh()
{
	int i = n-1;
	while(A[i] >= A[i+1] && i > 0) i--;
	if (i == 0) biggest = true;
	else{
		int j = n;
		while(A[j] <= A[i]){
			j--;
		}
		swap(A[i], A[j]);
	}
	reverse(A+i+1, A+n+1);
}

void xuat()
{
	for (int i = 1; i <= n; i++) cout << A[i];
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> k;
		str.clear();
		cin >> str; n = str.length();
		next();
		sinh();
		cout << k << " ";
		if(!biggest) xuat();
		else cout << "BIGGEST";
		biggest = false;
		cout << endl;
	}
}
