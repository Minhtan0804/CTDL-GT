#include<bits/stdc++.h>
using namespace std;
int n, A[15], k = 1;
bool stop = false;

void xuat()
{
	cout << "(";
	string str;
	for (int i = 1; i <= k; i++) str += to_string(A[i]) + " ";
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
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n;
		A[1] = n;
		while(!stop)
		{
			xuat();
			sinh();
		}
		k = 1; stop = false;
		cout << endl;
	}
}

