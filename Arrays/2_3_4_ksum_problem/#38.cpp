#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
//leetcode ques of two element sum here we have to find in single array only  
vector<pair<int, int>> twoSum(const vector<int> &arr, int target)
{
    vector<pair<int, int>> indices; // Stores the indices of pairs

    unordered_map<int, int> valueIndexMap;

    for (int i = 0; i < arr.size(); ++i)
    {
        if (valueIndexMap.find(target - arr[i]) != valueIndexMap.end())
            indices.push_back({valueIndexMap.find(target - arr[i])->second, i});

        valueIndexMap[arr[i]] = i;
    }

    return indices;
}

int main()
{
    vector<int> arr = {2, 6, 3, 8, 11};
    int target = 14;

    vector<pair<int, int>> ans = twoSum(arr, target);
    if (ans.empty())
    {
        cout << "No pairs found." << endl;
    }
    else
    {
        cout << "Pairs with sum equal to target:" << endl;
        for (const auto &pair : ans)
        {
            cout << "(" << pair.first << ", " << pair.second << ")" << endl;
        }
    }

    return 0;
}
