#include<iostream>
using namespace std;
int minJumps(int arr[], int size){
    if (size==1)
    {
        return 0;
    }
    
    int k = 1;
    int index = 0;
    while(index<=size-2)
    {
        int maxo=0;
        int count=0;
        int maxIndex=0;
        for(int i=arr[index]+index;i>index;i--){
            int prevMax = maxo;
            maxo = max(maxo,arr[i]-count);
            if(maxo!=prevMax) maxIndex=i;
            count++;
        }
        if(index<size){
        index = index+arr[maxIndex];
        }
        if (arr[maxIndex]==0)
        {
            return -1;
        }
        
        k++;
        
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