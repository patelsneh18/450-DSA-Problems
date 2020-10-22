#include<iostream>
using namespace std;

int unionCounter(int arr1[],int arr2[],int size1,int size2)
{
    int count=0;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i]==arr2[j])
            {
                count++;
            }
        }
    }    
    int unionVal=size1+size2-count;
    return unionVal;
}

int main(){
    int size1=0; int size2=0;
    cin>>size1;
    cin>>size2;
    int array[size1];
    int array1[size2];
    for (int i = 0; i < size1; i++)
    {
     cin>>array[i];
    }

    for (int i = 0; i < size2; i++)
    {
     cin>>array1[i];
    }

    cout<<unionCounter(array,array1,size1,size2);
    return 0;
}
