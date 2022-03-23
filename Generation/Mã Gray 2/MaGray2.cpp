#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string gray, bin = ""; cin >> gray;
		
		bin += gray[0];
		
		for (int i = 1; i < gray.length(); i++)
		{
			if (gray[i] == '1'){
				if (bin[i-1] == '0') bin += '1';
				else bin += '0';
			}else {
				if (bin[i-1] == '0') bin += '0';
				else bin += '1';
			}
		}
		cout << bin << "\n";
	}
	return 0;
}

