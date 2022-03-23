#include<bits/stdc++.h>
using namespace std;
bool OK = false;
int A[20] = {0};
int n, k;

void xuat()
{
    for (int i = 1; i <= n; i++) cout << A[i];
    cout << endl;
}

void sinh()
{
    int i = n;
    while(A[i] == 1) i--;
    if (i == 0) OK = true;
    else {
    	A[i] = 1;
        for (int j = i+1; j <= n; j++) A[j] = 0;
    }
}

bool check()
{
	int count = 0;
    for (int i = 1; i <= n; i++)
    {
    	if(A[i] == 1) count++;
	}
	if (count != k) return false;
    return true;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
	    cin >> n >> k;
	    memset(A, 0, sizeof(A));
	    while(!OK)
	    {
	        if (check()){
	        xuat();
			}
	        	sinh();
	    }
	    OK = false;
	}
    return 0;
}
