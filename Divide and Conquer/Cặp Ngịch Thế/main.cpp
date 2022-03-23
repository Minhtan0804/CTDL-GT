#include<bits/stdc++.h>
using namespace std;

long long merge(long long A[], int l, int mid, int r)
{
    int i, j, k, h = l;
    l = mid-l+1;
    r -= mid;
    long long L[l], R[r];
    for (int i = 0; i < l; i++) L[i] = A[h+i];
    for (int i = 0; i < r; i++) R[i] = A[mid+i+1];

    long long ans = 0;
    i = 0; j = 0; k = mid - l +1;

    while(i < l && j < r)
    {
        if (L[i] <= R[j]) A[k++] = L[i++];
        else {
            A[k++] = R[j++];
            ans += l-i;
        }
    }

    while(i < l) A[k++] = L[i++];
    while(j < r) A[k++] = R[j++];

    return ans;
}

long long mergeSort(long long A[], int l, int r)
{
    long long ans = 0;
    if (l < r){
        int mid = (l + r)/2;
        ans += mergeSort(A, l, mid);
        ans += mergeSort(A, mid+1, r);
        ans += merge(A, l, mid, r);
    }
    return ans;
} 

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        long long *A = new long long[n];
        for (int i = 0; i < n; i++) cin >> A[i];

        cout << mergeSort(A, 0, n-1) << endl;
    }
}

































// #include <bits/stdc++.h>
// using namespace std;

// int _mergeSort(long long arr[], int temp[], int left, int right);
// int merge(long long arr[], int temp[], int left, int mid, int right);

// long long mergeSort(long long A[], int array_size)
// {
// 	int temp[array_size];
// 	return _mergeSort(A, temp, 0, array_size - 1);
// }

// long long _mergeSort(long long A[], int temp[], int left, int right)
// {
// 	long long mid, inv_count = 0;
// 	if (right > left) { 
//         mid = (right + left) / 2;

// 		inv_count += _mergeSort(A, temp, left, mid);
// 		inv_count += _mergeSort(A, temp, mid + 1, right);

// 		inv_count += merge(A, temp, left, mid + 1, right);
// 	}
// 	return inv_count;
// }

// long long merge(long long A[], int temp[], int left, int mid, int right)
// {
// 	int i, j, k;
//     long long inv_count = 0;

// 	i = left; j = mid; k = left;
// 	while ((i <= mid - 1) && (j <= right)) {
// 		if (A[i] <= A[j]) {
// 			temp[k++] = A[i++];
// 		}
// 		else {
// 			temp[k++] = A[j++];

// 			inv_count = inv_count + (mid - i);
// 		}
// 	}

// 	while (i <= mid - 1) temp[k++] = A[i++];

// 	while (j <= right) temp[k++] = A[j++];

// 	for (i = left; i <= right; i++) A[i] = temp[i];

// 	return inv_count;
// }

// int main()
// {
//     int t; cin >> t;
//     while(t--)
//     {
//         int n; cin >> n;
//         long long *A = new longlong[n];
//         for (int i = 0; i < n; i++) cin >> A[i];

//         long long ans = mergeSort(A, n);
//         cout << ans << endl;
//     }
// 	return 0;
// }
