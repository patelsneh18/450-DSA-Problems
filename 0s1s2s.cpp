#include<iostream>
using namespace std;

void sorter(int arr[],int size)
{
    int i;
    int zeros=0;int ones=0;int twos=0;
    for (i = 0; i < size; i++) { 
        switch (arr[i]) { 
        case 0: 
            zeros++; 
            break; 
        case 1: 
            ones++; 
            break; 
        case 2: 
            twos++; 
            break; 
        } 
    } 
    i=0;
    while (zeros>0)
    {
        arr[i++]=0;
        zeros--;
    }
    
    while (ones>0)
    {
        arr[i++]=1;
        ones--;
    }
    
    while (twos>0)
    {
        arr[i++]=2;
        twos--;
    }
    
}
int main()
{
    int array[7]={2,1,1,2,0,1,0};
    sorter(array,7);
    for (int i = 0; i < 7; i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}
