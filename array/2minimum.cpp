// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int minimum(int arr[], int n)
{
    int min = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<minimum(arr, n);

    return 0;
}