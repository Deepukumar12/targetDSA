#include <iostream>

using namespace std;

int secondsLargest(int arr[], int n)
{
    int firstLargest = -1, secondLargest = -1;
    for(int i=0;i<n;i++)
    {
        if(arr[i] > firstLargest)
        {
            firstLargest = arr[i];
        }
    }
    // return firstLargest;
    // int secondLarge = firstLargest;
    for(int i=0;i<n;i++)
    {
        if(arr[i] > firstLargest)
        {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        }
        
        if(arr[i] > secondLargest && arr[i] < firstLargest)
        {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
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
    
    cout<<secondsLargest(arr, n);
    return 0;
}