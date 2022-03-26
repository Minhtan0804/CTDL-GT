#include<iostream>
#include<algorithm>
using namespace std;
int abs_thanh(int a)
{
    if(a >= 0) return a;
    else return a*-1;
}
void ss(int a[], int n, int k)
{
    for(int i = 0 ; i < n ; i++)
    { 
        for(int j = 0; j < n - 1;j++)
        {
            if(abs_thanh(k-a[j]) > abs_thanh(k-a[j+1]) )
            {
                swap(a[j],a[j+1]);
            }
        }
    }
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        int a[100000];
        
        for(int i = 0 ; i < n ; i++)
        {
            cin>>a[i];
        }
        ss(a,n,k);
        for(int i = 0 ; i< n ;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
