#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int noOfsubarraysWithMaxSumasMid(vector<int> nums, int mid)
{
    int sum = 0;
    int cnt = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (sum + nums[i] > mid)
        {
            cnt++;
            sum = nums[i];
        }
        else
            sum += nums[i];
    }
    return cnt;
}
int splitArray(vector<int> &nums, int k)
{
    int start = *max_element(nums.begin(), nums.end());
    int end = accumulate(nums.begin(), nums.end(), 0);
    while (start <= end)
    {
        int mid = (start + end) / 2;
        int n = noOfsubarraysWithMaxSumasMid(nums, mid);
        if (n > k)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return start;
}
int main()
{
    vector<int> hm = {7, 2, 5, 10, 8};
    cout << splitArray(hm, 2);
    return 0;
}