#include<bits/stdc++.h>
using namespace std;
bool Ok = false;
int n, k, A[105] = {0};

void Xuat()
{
    for (int i = 1; i <= k; i++) cout << A[i];
    cout << " ";
}

void sinhToHop()
{
    int i = k;
    while(A[i] == n-k+i) i--;
    if(i == 0) Ok = true;
    else
    {
        A[i]++;
        for(int j = i+1; j <= k; j++) A[j] = A[j-1]+1;
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= n; i++) A[i] = i;
        while(!Ok)
        {
            Xuat();
            sinhToHop();
        }
        Ok = false;
        cout << endl;
    }
    return 0;
}
