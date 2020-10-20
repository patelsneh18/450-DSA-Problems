#include<iostream>
using namespace std;

struct dual
{
    int min;
    int max;
};

struct dual maxminFinder(int arr[],int size)
{
    struct dual value;
    if(size==1)
    {
        value.min=arr[0];
        value.max=arr[0];
        return value;
    }
    if (arr[0]>arr[1])
    {
        value.min=arr[1];
        value.max=arr[0];
    }
    else
    {
        value.min=arr[0];
        value.max=arr[1];
    }
    for (int i = 2; i < size; i++)
    {
        if (arr[i]>value.max)
        {
            value.max=arr[i];
        }
        else if (arr[i]<value.min)
        {
            value.min=arr[i];
        }
    }
        return value;
}
int main(){
    int array[6]={3,2,32,6,34,1};
    int n = 6;
     
    struct dual value = maxminFinder(array, n);
     
    cout << "Minimum element is "
         << value.min << endl;
    cout << "Maximum element is "
         << value.max;
          
    return 0;
}
