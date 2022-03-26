#include<iostream> 
#include<algorithm> 
using namespace std; 

int longestCommonSubset(string str1, string str2) 
{ 
	int len1 = str1.size(); 
	int len2 = str2.size();
	int arr[len1 + 1][len2 + 1]; 
	for(int i = 0; i <= len1; i++) 
	{ 
		for(int j = 0; j <= len2; j++) 
		{ 
			if(i == 0 || j == 0) { 
				arr[i][j] = 0; 
			} else if(str1[i - 1] == str2[j - 1]) { 
				arr[i][j] = 1 + arr[i - 1][j - 1]; 
			} else if(str1[i - 1] != str2[j - 1]) { 
				arr[i][j] = max(arr[i - 1][j], arr[i][j - 1]); 
			}
		}
	} 
	return arr[len1][len2];
}

int main() 
{ 
	int t; cin >> t;
	while(t--) { 
	string str1, str2; cin >> str1 >> str2; 
	
	cout << longestCommonSubset(str1, str2) << endl; 
	} 
}