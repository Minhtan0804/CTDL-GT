#include<bits/stdc++.h>
using namespace std;
bool ok = false;
int n, A[20];

void xuat()
{
	int i = 1;
	while(!A[i]) i++;
	for (i; i <= 18; i++) cout << A[i]*9;
	cout << endl;
}

bool check(){
	int i = 1;
	long long j = 0;
	while(!A[i]) i++;
	for (i; i <= 18; i++) j = j*10 + A[i]*9;
	if(j % n == 0) return true;
	else return false;
}

//void Try (int i)
//{
//	for (int j = 0; j < 2; j++)
//	{
//		A[i] = j;
//		if(i == 18){
//			if(check()){
//				xuat();
//				return;
//			}
//		}else Try(i+1);
//	}
//}

void boiSo()
{
	int i = 18;
	while(A[i]) i--;
	if (i == 0) ok = true;
	else{
		A[i] = 1;
		for (int j = i+1; j <= 18; j++) A[j] = 0;
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		memset(A, 0, sizeof(A));
		cin >> n;
		while(!ok)
		{
			boiSo();
			if(check()){
				xuat();
				break;
			}
		}
		ok = false;
	}
}

