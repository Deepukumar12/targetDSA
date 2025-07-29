
#include <iostream>
using namespace std;

void arrReverse(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int start = 0;
    int end = n -  1;
    
    while(start < end)
    {
        // swap(arr[start], arr[end]);
        // or
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
    arrReverse(arr, n);
    return 0;
}