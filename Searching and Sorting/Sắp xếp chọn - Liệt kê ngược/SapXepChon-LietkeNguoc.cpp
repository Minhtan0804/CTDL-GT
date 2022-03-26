#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int *A = new int[n];
    int B[105][105];
    for (int i = 0; i < n; i++) cin >> A[i];

    for (int i = 0; i < n-1; i++)
    {
        int min = i;
        for (int j = i+1; j < n; j++)
        {
            if (A[min] > A[j]) min = j;
        }
        if (min != i) swap(A[i], A[min]);
        for (int j = 0; j < n; j++) B[i][j] = A[j];
    }
    
    for (int i = n-2; i >= 0; i--)
    {
    	cout << "Buoc " << i+1 << ": ";
        for (int j = 0; j < n; j++) cout << B[i][j] << " ";
        cout << endl;
    }
}

