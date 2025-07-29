#include <iostream>
// #include<algorithm>
#include <climits>
using namespace std;

void subarraySum(int arr[], int n)
{
    int maxSum = INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int currSum = 0;
            for(int k=i;k<=j;k++)
            {
                currSum += arr[k];
               maxSum = max(maxSum, currSum);
            }
            cout<<currSum<<",";
        }
        cout<<endl;
    }
    cout<<maxSum;
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
    
    subarraySum(arr, n);
    return 0;
}