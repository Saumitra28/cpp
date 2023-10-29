#include <iostream>
#include <map>
using namespace std;
int lenOfLongSubarr(int a[], int n, int k)
{
    map<int, int> presum;
    int sum = 0;
    int maxlen = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum == k)
            maxlen = max(maxlen, i + 1);
        if (presum.find(sum - k) != presum.end())
        {
            int len = i - presum[sum - k];
            maxlen = max(maxlen, len);
        }
        if (presum.find(sum) == presum.end())
            presum[sum] = i;
    }
    return maxlen;
}
int main()
{
    int a[] = {1, 0, 0, 3, -9, 11, -13, 15};
    cout << lenOfLongSubarr(a, 8, 9);
    return 0;
}