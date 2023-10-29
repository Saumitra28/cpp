#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// optimal approach
vector<vector<int>> fourSum(vector<int> &a, int x)
{
    int n = a.size();
    sort(a.begin(), a.end());
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && a[i] == a[i - 1])
            continue;
        for (int j = i + 1; j < n; j++)
        {
            if (j > i + 1 && a[j] == a[j - 1])
                continue;
            int k = j + 1;
            int l = n - 1;
            while (k < l)
            {
                int sum = a[i] + a[j] + a[k] + a[l];
                if (sum > x)
                    l--;
                else if (sum < x)
                    k++;
                else
                {
                    vector<int> temp = {a[i], a[j], a[k], a[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while (k < l && a[k] == a[k - 1])
                        k++;
                    while (k < l && a[l] == a[l + 1])
                        l--;
                }
            }
        }
    }

    return ans;
}

int main()
{
    vector<int> hm = {10, 2, 3, 4, 5, 7, 8};
    vector<vector<int>> result = fourSum(hm, 23);

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
