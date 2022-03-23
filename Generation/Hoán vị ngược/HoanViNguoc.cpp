#include<bits/stdc++.h>
using namespace std;
bool Ok = false;
int n, A[105] = {0};

void Xuat()
{
    for (int i = 1; i <= n; i++) cout << A[i];
    cout << " ";
}

void sinhHoanVi()
{
    int i = n-1;
    while(A[i] < A[i+1] && i > 0) i--;
    if(i == 0) Ok = true;
    else
    {
        int j = n;
        while(A[j] > A[i]) j--;
        swap(A[i], A[j]);
    }
    reverse(A+i+1, A+n+1);
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++) A[i] = n-i+1;
        while(!Ok)
        {
            Xuat();
            sinhHoanVi();
        }
        Ok = false;
        cout << endl;
    }
    return 0;
}
