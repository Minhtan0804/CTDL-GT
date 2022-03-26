#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int *A = new int[n];
    for (int i = 0; i < n; i++) cin >> A[i];
    cout << "Buoc 0: " << A[0] << endl;
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
		cout << "Buoc " << i << ": ";
		for (int j = 0; j < i+1; j++) cout << A[j] << " ";
		cout << endl;
	}
}
