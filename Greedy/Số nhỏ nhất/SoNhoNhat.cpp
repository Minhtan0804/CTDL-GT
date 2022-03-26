#include<bits/stdc++.h>
using namespace std;
int s, d;

void numberMin()
{
	if (s == 0 || s > 9*d){
		cout << -1; return;
	}
	
	int A[d+1] = {0}, n = d;
	A[1] = 1; s--;
	while(s >= 9){
		A[n] = 9;
		n--; s -= 9;
	}
	A[n] += s;
	for (int i = 1; i <= d; i++) cout << A[i];
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> s >> d;
		numberMin();
		cout << endl;
	}
}

