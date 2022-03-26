#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        int *A = new int[n];
        for (int i = 0; i < n; i++) cin >> A[i];\
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if(A[i] == k) count++;
        }
        if (count == 0) count--;
        cout << count << "\n";
    }
}