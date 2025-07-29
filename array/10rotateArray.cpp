#include <iostream>
#include <vector>
using namespace std;

void arrayRotate(vector<int> &arr, int d)
{
    int n = arr.size();
    d = d%n;
    
    for(int i=1;i<=d;i++)
    {
        int first = arr[0];
        for(int j=0;j<n-1;j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = first;
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int d;
    cin>>d;
    
    arrayRotate(arr, d);
    return 0;
}