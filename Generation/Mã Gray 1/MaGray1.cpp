#include <iostream>
#include <string>
using namespace std;

void print_gray(string binary)
{
    string shift = "0",gray="";
    shift += binary;
    for(int i = 0; i < binary.length(); i++ )
        if(binary[i] != shift[i] )
            gray += "1";
        else
            gray += "0";
    cout << gray<< " ";
}

void bitString(int x, string prefix)
{
	if (x == 0) print_gray(prefix);
	else {
		bitString(x-1, (prefix+"0"));
		bitString(x-1, (prefix+"1"));
	}
}
int main ()
{
	int t; cin >> t;
	while(t--)
	{
	    int n; cin >> n;
	    bitString(n, "");
	    cout << "\n";
	}
    return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int k  = 1;
		for (int i = 1; i <= n; i++) k*=2;
		
		string s[k+5];
		s[1] = "0";
		s[2] = "1";
		if(n > 1)
		{
			int l = 2;
			for (int i = 2; i <= n; i++)
			{
				l *= 2;
				
				for (int j = 1; j <= l/2; j++)
				{
					s[l-j+1] = "1" + s[j];
					s[j] = "0" + s[j];
				}
			}
		}
		
		for (int i = 1; i <= k; i++) cout << s[i] << " ";

		cout << endl;
	}
	return 0;
}

*/
