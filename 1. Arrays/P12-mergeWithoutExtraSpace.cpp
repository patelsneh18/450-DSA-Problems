#include <bits/stdc++.h>
using namespace std;

void merge(int arr1[], int arr2[], int n, int m)
{
    int i = n - 1, j = 0;
    while (i >= 0 and j < m)
    {
        if (arr1[i] > arr2[j]) swap(arr1[i], arr2[j]);
        i--, j++;
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}
int main()
{
    int n1;
    cin >> n1;
    int arr1[n1];
    for (int i = 0; i < n1; i++) cin >> arr1[i];
    int n2;
    cin >> n2;
    int arr2[n2];
    for (int i = 0; i < n2; i++) cin >> arr2[i];
    merge(arr1,arr2,n1,n2);
    for (int i = 0; i < n1; i++) cout<<arr1[i]<<" ";
    for (int i = 0; i < n2; i++) cout<<arr2[i]<<" ";
    cout<<endl;
    return 0;
}