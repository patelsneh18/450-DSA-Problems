#include<iostream>
using namespace std;

void printArray(int arr[],int size)
{
    cout<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void rotateBy1(int arr[],int size)
{
    int temp[size-1];

    for (int i = 0; i < size-1; i++)
    {
        temp[i]=arr[i];
    }

    arr[0]=arr[size-1];

    for (int i = 0; i < size-1; i++)
    {
        arr[i+1]=temp[i];
    }   
}

int main(){
    int size=0;
    cout<<"Enter the size"<<endl;
    cin>>size;
    int array[size];
    cout<<"Enter the elements"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }
    cout<<"BEFORE ROTATION";
    printArray(array,size);
    rotateBy1(array,size);
    cout<<endl;
    cout<<"AFTER ROTATION";
    printArray(array,size);
}
