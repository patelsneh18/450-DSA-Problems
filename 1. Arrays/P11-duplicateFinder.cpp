#include<iostream>
using namespace std;

int duplicateFinder(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if(i!=j)
            {
                if (arr[i]==arr[j])
                {
                    return arr[i];
                }
            }
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter Size:"<<endl;
    cin>>n;
    cout<<"Enter Elements"<<endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<duplicateFinder(arr,n);
}