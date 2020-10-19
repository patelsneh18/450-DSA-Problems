#include<iostream>
using namespace std;

int arrReverse(int array[],int size){
    int k = size/2;
    int temp[k];
    for (int i = 0; i < k; i++)
    {
        temp[i]=array[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        array[i]=array[size-1-i];
    }
    int l=0;
    for (int i = size-1; i >= size-k; i--)
    {
        array[i]=temp[l];
        l++;
    }
    return 0;
}
int main(){
    cout<<"Enter length of array to reverse :"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"NORMAL ARRAY"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arrReverse(arr,n);
    cout<<"REVERSED ARRAY"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
