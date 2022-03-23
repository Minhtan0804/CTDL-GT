#include<bits/stdc++.h>
using namespace std;
bool OK = false;
int A[15] = {0};
int n;

void xuat()
{
    for (int i = 1; i <= n; i++)
    {
        if(A[i]) cout << "B";
        else cout << "A";
    }
    cout << " ";
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

int main()
{
    int t; cin >> t;
    while(t--)
    {
	    cin >> n;
	    memset(A, 0, sizeof(A));
	    while(!OK)
	    {
	        xuat();
	    	sinh();
	    }
	    OK = false;
	    
		cout << endl;
	}
    return 0;
}
