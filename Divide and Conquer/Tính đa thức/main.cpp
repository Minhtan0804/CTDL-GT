#include<bits/stdc++.h>
using namespace std;

struct element
{
    int base, index;
};



int main()
{
    int t; cin >> t;
    while(t--)
    {
        int m, n; cin >> m >> n;
        element *P = new element[m];
        element *Q = new element[n];
        for (int i = 0; i < m; i++)
        {
            cin >> P[i].base;
            P[i].index = i;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> Q[i].base;
            Q[i].index = i;
        }
        

        vector<vector<element>> res;

        for (int i = 0; i < m; i++)
        {
            vector<element> temp;
            for (int j = 0; j < n; j++)
            {
                temp.push_back({P[i].base*Q[j].base, P[i].index+Q[j].index});
            }

            res.push_back(temp);
        }
        
//        
//        for (int i = 0; i < res.size(); i++)
//            {
//                for (int j = 0; j < res[i].size(); j++)
//                {
//                    cout << res[i][j].base << " ";
//                }
//            }

        int index = 0;
        while(index < m+n-1)
        {
            int base = 0;
            for (int i = 0; i < res.size(); i++)
            {
                for (int j = 0; j < res[i].size(); j++)
                {
                    if (res[i][j].index == index) base += res[i][j].base;
                }
            }
            cout << base << " ";
            index++;
        }
        cout << endl;
    }
}
