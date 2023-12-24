#include <iostream>
#include <unordered_map>
#include <vector>
//optimal approach via presum concept used before in one subarray ques too !
//reverse eng waala
using namespace std;
int findAllSubarraysWithGivenSum(vector<int> &nums, int k)
{

    int n = nums.size();
        int sum = 0;
        int cnt = 0;

        // Create a hashmap to store cumulative sums and their frequencies
        unordered_map<int, int> cumulativeSums;
        cumulativeSums[0] = 1;  // Include the empty subarray

        for (int i = 0; i < n; i++) {
            sum += nums[i];

            // Check if there exists a cumulative sum (sum - k) in the hashmap
            if (cumulativeSums.find(sum - k) != cumulativeSums.end()) {
                cnt += cumulativeSums[sum - k];
            }

            // Update the hashmap with the current cumulative sum
            cumulativeSums[sum]++;
        }

        return cnt;
}
int main()
{
    vector<int> a = {1, 1, 1};
    cout << findAllSubarraysWithGivenSum(a, 3);
    return 0;
}