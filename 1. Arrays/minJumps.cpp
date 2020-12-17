#include<iostream>
using namespace std;
int minJumps(int arr[],int size)
{
    if (size==1)
    {
        return 0;
    }
    
    int k = 0;
    int index = 0;
    while(index<=size-2)
    {
        index = index + arr[index];
        k++;
        if (index==0)
        {
            return -1;
        }
    }
    return k;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<minJumps(arr,n)<<endl;
}