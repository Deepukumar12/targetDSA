
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int kadane(vector<int> &arr)
{
    int n = arr.size();
    int currSum = 0;
    int maxSum = INT_MIN;
    for(int i=0;i<n;i++)
    {
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if(currSum < 0)
        {
            currSum = 0;
        }
    }
    return maxSum;
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
    cout<<kadane(arr);
    
    return 0;
}