#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int *A = new int[n];
    for (int i = 0; i < n; i++) cin >> A[i];

    for (int j = 0; j < n-1; j++)
    {
        cout << "Buoc " << j << ": ";
        int min = j;
        for (int i = j+1; i < n; i++)
        {
            if (A[min] > A[i]) min = i;
        }
        if (min != j) swap(A[j], A[min]);
        for (int i = 0; i < n; i++) cout << A[i] << " ";
        cout << "\n";
    }

}
