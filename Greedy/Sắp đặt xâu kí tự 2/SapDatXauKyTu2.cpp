#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int k; cin >> k;
        string str; cin >> str;

        int F[300] = {0}, maxx = INT_MIN;

        for (int i = 0; i < str.length(); i++)
        {
        	F[str[i]]++;
        	if (maxx < F[str[i]]) maxx = F[str[i]];
		}

        if ((maxx-1)*(k-1) > str.length()- maxx) cout << -1;
        else cout << 1;
        cout << endl;
    }
}
