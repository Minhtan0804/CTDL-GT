#include<bits/stdc++.h>
using namespace std;
int n, X[1000] = {0};
bool A[100], Xuoi[100], Nguoc[100];
long dem = 0;

void Try(int i){
	for (int j = 1; j <= n; j++){
		if (A[j] && Xuoi[i-j+n] && Nguoc[i+j-1]){
			X[i] = j;
			A[j] = false; 
			Xuoi[i-j+n] = false; 
			Nguoc[i+j-1] = false;
			if (i == n){
				dem++;
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
	while(t--){
		cin >> n;
		for (int i = 0; i < 100; i++) A[i] = true, Xuoi[i] = true, Nguoc[i] = true;
		dem = 0;
		Try(1);
		cout << dem << "\n";
	}
	return 0;
}

