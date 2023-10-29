#include <iostream>
#include <map>
using namespace std;
//optimal approach
int lenghtoflargestsubarrwithsum0(int a[], int n)
{
    map<int, int> presum;
    int sum = 0;
    int maxlen = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum == 0)
            maxlen = max(maxlen, i + 1);
        if (presum.find(sum) != presum.end())
        {
            int len = i - presum[sum];
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
    cout << lenghtoflargestsubarrwithsum0(a, 8);
    return 0;
}