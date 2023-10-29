#include <iostream>
#include <algorithm>
using namespace std;

int maxSubarraySum(int arr[], int n)
{
    long long sum = 0;
    long long ans = arr[0]; // Initialize ans with the first element
    long long max = LONG_LONG_MIN;
    // int start = 0;   //if
    // int ansstart = -1;  // asked to
    // int ansend = -1;   // print that array
    for (int i = 0; i < n; i++)
    {
        // if(sum==0)
        // start=i;
        sum = sum + arr[i];
        if (sum > max)
        {
            max = sum;
            // ansstart = start;   // if asked to
            // ansend = i;         //print that array
        }
        if (sum < 0)
            sum = 0; // Reset sum to 0 if it becomes negative
    }

    return ans;
}

int main()
{
    int a[] = {-2, 1};
    cout << maxSubarraySum(a, 2);
    return 0;
}
