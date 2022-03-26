#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int *A = new int[n];
    for (int i = 0; i < n; i++) cin >> A[i];

    for (int i = 0; i < n-1; i++)
    {
		cout << "Buoc " << i+1 << ": ";
    	for (int j = i+1; j < n; j++)
    	{
    		if(A[i] > A[j]) swap(A[i], A[j]);
		}
		for (int i = 0; i < n; i++) cout << A[i] << " ";
		cout << endl;
    }
}
