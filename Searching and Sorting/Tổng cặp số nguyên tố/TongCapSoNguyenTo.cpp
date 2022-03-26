#include<bits/stdc++.h>
using namespace std;
bool prime[1000000] = {false};

void Prime()
{
    prime[0] = true;
    prime[1] = true;

    for (int i = 2 ; i < 1e6; i++)
    {
        if(!prime[i])
        {
            for(int j = 2*i; j < 1e6; j+=i)
            {
                prime[j] = true;
            }
        }
    }
}

int main()
{
	Prime();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        bool check = false;
        for (int i = 2; i <= n/2+1; i++)
        {
            if(!prime[i] && !prime[n-i])
            {
                cout << i << " " << n-i;
                check = true;
                break;
            }
        }
        if(!check) cout << -1;
        cout << endl;
    }
}
