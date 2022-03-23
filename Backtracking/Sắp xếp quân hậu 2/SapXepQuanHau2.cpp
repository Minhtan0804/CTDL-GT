#include<bits/stdc++.h>
using namespace std;
int n = 8, X[10] = {0};
bool A[100], Xuoi[100], Nguoc[100];
int C[10][10];
int sum = 0;

void Xuat(){
	int s = 0;
	for (int i = 1; i <= n; i++) s+= C[i][X[i]];
	if(s > sum) swap(s, sum);
}

void Try(int i){
	for (int j = 1; j <= n; j++){
		if (A[j] && Xuoi[i-j+n] && Nguoc[i+j-1]){
			X[i] = j;
			A[j] = false; 
			Xuoi[i-j+n] = false; 
			Nguoc[i+j-1] = false;
			if (i == n){
				Xuat();
			} 
			else Try(i+1);
			A[j] = true; 
			Xuoi[i-j+n] = true; 
			Nguoc[i+j-1] = true;
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--)
	{
		for (int i = 1; i <= 8; i++)
		{
			for (int j = 1; j <= 8; j++)
			{
				cin >> C[i][j];
			}
		}
		for (int i = 0; i < 100; i++) A[i] = true, Xuoi[i] = true, Nguoc[i] = true;
		Try(1);
		cout << sum << endl;
		sum = 0;
	}
	return 0;
}

