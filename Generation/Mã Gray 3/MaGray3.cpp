#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string bin, gray = ""; cin >> bin;
		gray += bin[0];
		
		for (int i = 1; i < bin.length(); i++)
		{
			if(bin[i] != bin[i-1]) gray += "1";
			else gray += "0";
		}
		
		cout << gray;
		cout << endl;
	}
	return 0;
}

