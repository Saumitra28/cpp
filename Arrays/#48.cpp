#include <iostream>
#include <unordered_map>
#include <vector>
//optimal approach via presum concept used before in one subarray ques too !
//reverse eng waala
using namespace std;
int findAllSubarraysWithGivenSum(vector<int> &arr, int k)
{

    unordered_map<int, int> mp;
    mp[0] = 1;
    int presum = 0;
    int cnt = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        presum += arr[i];
        int remove = presum - k;
        cnt += mp[remove];
        mp[remove]++;
    }
    return cnt;
}
int main()
{
    vector<int> a = {1, 1, 1};
    cout << findAllSubarraysWithGivenSum(a, 3);
    return 0;
}