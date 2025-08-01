#include <iostream>

using namespace std;

int binary(int arr[], int n , int key)
{
    int start = 0;
    int end = n - 1;
    while(start <= end)
    {
        int mid = (start + end)/2;
        
        if(arr[mid] == key)
        {
            return mid;
        }
        else if( arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
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
    
    int key;
    cin>>key;
    
    cout<<binary(arr, n, key);
    return 0;
}