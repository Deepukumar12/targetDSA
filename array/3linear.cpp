#include <iostream>
using namespace std;

int linear(int arr[],int n, int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i] == key)
        {
            return i;
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
    
    cout<<linear(arr, n, key);
    return 0;
}