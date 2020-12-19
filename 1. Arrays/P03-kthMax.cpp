#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int l, int r, int k) {
    int n = r+1;
    sort(arr,arr+n);
    return arr[k-1];
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];
    int k;
    cin>>k;
    cout<<kthSmallest(arr,0,n-1,k);
    return 0;
}