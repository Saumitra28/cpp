#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int longestConsecutive(vector<int> &nums)
{
    if (nums.size() <= 1)
        return nums.size();

    sort(nums.begin(), nums.end());

    int maxCount = 1;
    int currentCount = 1;

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == nums[i - 1] + 1)
        {
            currentCount++;
        }
        else if (nums[i] != nums[i - 1])
        {
            currentCount = 1;
        }

        maxCount = max(maxCount, currentCount);
    }

    return maxCount;
}
int main()
{
    vector<int> a = {0, 2, 3, 5, 7, 8, 1, 4, 6};
    cout << longestConsecutive(a);

    return 0;
}