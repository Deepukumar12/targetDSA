#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void zeroes(vector<int>  &arr)
{
    int n = arr.size();
    int index = 0;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i] != 0)
        {
            swap(arr[index], arr[i]);
            index++;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i] <<" ";
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
    
    zeroes(arr);
    
    
    return 0;
}