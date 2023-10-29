#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//optimal approach
vector<vector<int>> threeSum(vector<int> &a)
{
    int n = a.size();
    sort(a.begin(), a.end());
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && a[i] == a[i - 1])
            continue;
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            int sum = a[i] + a[j] + a[k];
            if (sum > 0)
                k--;
            else if (sum < 0)
                j++;
            else
            {
                vector<int> temp = {a[i], a[j], a[k]};
                ans.push_back(temp);
                j++;
                k--;
                while (j < k && a[j] == a[j - 1])
                    j++;
                while (j < k && a[k] == a[k + 1])
                    k--;
            }
        }
    }

    return ans;
}

int main()
{
    vector<int> hm = {-1, 0, 1, 2, -1, 4};
    vector<vector<int>> result = threeSum(hm);

    for (const auto &triplet : result)
    {
        for (auto num : triplet)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
