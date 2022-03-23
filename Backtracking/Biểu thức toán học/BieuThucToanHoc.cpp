#include<bits/stdc++.h>
using namespace std;
bool wrong = true;
int num[6], A[6];

void Try(int i, int s)
{
	if(!wrong) return;
	if(s == 23 && i == 5){
		wrong = false;
		return;
	}
	
	for (int j = 0; j < 5; j++)
	{
		if(A[j] == 0) {
			A[j] = 1;
			Try(i+1, s+num[j]);
			Try(i+1, s*num[j]);
			Try(i+1, s-num[j]);
			A[j] = 0;
		}
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		for (int i = 0; i < 5; i++) cin >> num[i];
		
		wrong = true;
		for (int i = 0; i < 5; i++){
			A[i] = 1;
			Try(1, num[i]);
			A[i] = 0;
		}
		
		if(!wrong) cout << "YES";
		else cout << "NO";

		cout << endl;
	}
}

