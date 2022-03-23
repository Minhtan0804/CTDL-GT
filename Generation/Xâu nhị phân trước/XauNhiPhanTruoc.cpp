#include<bits/stdc++.h>
using namespace std;
bool OK = false;
int A[10000] = {0}; int n;

void truoc()
{
	for (int i = n; i > 0; i--)
	{
		if (A[i]== 0) A[i] = 1;
		else {
			A[i] = 0;
			break;
		}
	}
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
		truoc();
		Xuat();
		cout << endl;
    }
    return 0;
}
