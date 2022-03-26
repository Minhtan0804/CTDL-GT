#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int *A = new int[n];
	int B[105][105];
    for (int i = 0; i < n; i++) cin >> A[i];
    B[0][0] = A[0];

    for (int i = 1; i < n; i++)
    {
    	int x = A[i];
    	int j = i-1;
    	while(j >= 0 && A[j] > x)
    	{
    		A[j+1] = A[j];
    		j--;
		}
		A[j+1] = x;
		for (int j = 0; j < i+1; j++) B[i][j] = A[j];
	}

	for (int i = n-1; i >= 0; i--)
    {
    	cout << "Buoc " << i << ": ";
        for (int j = 0; j < i+1; j++) cout << B[i][j] << " ";
        cout << endl;
    }
}
