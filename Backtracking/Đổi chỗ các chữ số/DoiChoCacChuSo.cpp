#include<bits/stdc++.h>
using namespace std;
string str, maxx;

void Try(int k)
{
	if(k == 0) return;
	int n = str.length();
	
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if(str[i] < str[j]){
				swap(str[i], str[j]);
				if(str > maxx) maxx = str;
				Try(k-1);
				swap(str[i], str[j]);
			}
		}
	}
	
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int k; cin >> k >> str;
		maxx = str;
		
		
		Try(k);
		cout << maxx << endl;
	}
}

