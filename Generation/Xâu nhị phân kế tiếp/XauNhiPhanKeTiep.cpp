#include<bits/stdc++.h>
using namespace std;
bool OK = false;
int A[105] = {0}; int n;

void KeTiep()
{
	int i = n;
	while(A[i]){
		A[i] = 0; i--;
	}
	if (i == 0) return;
	else A[i] = 1;
}

void Xuat()
{
	for (int i = 1; i <= n; i++) cout << A[i];
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string str;
		getline(cin >> ws, str);
		n = str.length();
		for (int i = 0; i < n; i++) A[i+1] = str[i] - '0';
		KeTiep();
		Xuat();
		cout << endl;
    }
    return 0;
}
