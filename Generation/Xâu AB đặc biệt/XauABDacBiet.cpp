#include<bits/stdc++.h>
using namespace std;
bool OK = false;
int A[20] = {0};
int n, k, dem = 0; string str = "";

void tao()
{
	for (int i = 1; i <= n; i++)
    {
        if(A[i]) str += "B";
		else str += "A";
    }
}

void xuat()
{
    for (int i = 0; i < str.length(); i++)
    {
    	if(i % n == 0) cout << endl;
    	cout << str[i];
	}
    cout << endl;
}

void sinh()
{
    int i = n;
    while(A[i] == 1) i--;
    if (i == 0) OK = true;
    else {
    	A[i] = 1;
        for (int j = i+1; j <= n; j++) A[j] = 0;
    }
}

bool check()
{
	int count = 0, counter = 0;
    for (int i = 1; i <= n; i++)
    {
    	while(A[i] == 0 && i <= n) {
		count++;
		i++; 
		}
		if (count == k) counter++; count = 0;
	}
	if (counter != 1) return false;
    return true;
}

int main()
{
    cin >> n >> k;
    while(!OK)
    {
        if (check()){
    	 	dem++;
    	 	tao();
		}
        	sinh();
    }
    cout << dem;
    xuat();
    return 0;
}
