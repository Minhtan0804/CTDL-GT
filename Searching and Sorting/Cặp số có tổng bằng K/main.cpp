#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, k; cin >> n >> k;
        int *A = new int[n+1];
        map<int, int> B;
        for (int i = 1; i <= n; i++)
        {
            cin >> A[i];
            B[A[i]]++;
        }

        long long count = 0;
        for (int i = 1; i <= n; i++)
        {
            if (A[i] == k - A[i]) count += B[A[i]]-1;
            else count += B[k-A[i]];
        }

        cout << count/2 << endl;
    }
}
