#include<bits/stdc++.h>
using namespace std;

struct Matrix{
	long long F[2][2];
};

int mod = 1e9+7;
Matrix operator* (Matrix A, Matrix B){
	Matrix C;
	for (int i = 0; i <= 1; i++){
		for (int j = 0; j <= 1; j++){
			C.F[i][j] = 0;
			for (int k = 0; k <= 1; k++){
				C.F[i][j] = (C.F[i][j] + (A.F[i][k] * B.F[k][j]) %mod) %mod;
			}
		}
	}
	return C;
}

Matrix PowerMod(Matrix A, int n){
	if (n == 1) return A;
	Matrix tmp =  PowerMod(A, n/2);
	if (n %2 == 0) return tmp*tmp;
	return A*tmp*tmp;
}

long long FiboN(int n){
	Matrix A;
	A.F[0][0] = 1; A.F[0][1] = 1; A.F[1][0] = 1; A.F[1][1] = 0;
	Matrix ans = PowerMod(A, n);
	return ans.F[0][1];
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << FiboN(n);
		cout << endl;
	}
	return 0;
}

