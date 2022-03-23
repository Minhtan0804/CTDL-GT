#include<bits/stdc++.h>
using namespace std;
bool OK = false;
int A[20] = {0};
int n;

void xuat()
{
    for (int i = 1; i <= n; i++) cout << A[i] << "                      " ;
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
    int i = 1, j = n;
    while(i <= j)
    {
        if (A[i] != A[j]) return false;
        i++; j--;
    }
    return true;
}

int main()
{
    cin >> n;
    while(!OK)
    {
        if (check()){
        xuat();
		}
        	sinh();
    }
    return 0;
}

