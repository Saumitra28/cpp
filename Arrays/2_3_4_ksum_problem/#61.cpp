#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int> &a)
{
    int n = a.size();
    set<vector<int>> st;

    for (int i = 0; i < n; i++)
    {
        set<int> mp;
        for (int j = i + 1; j < n; j++)
        {
            int third = -(a[i] + a[j]);//this is for sum zero!
            if (mp.find(third) != mp.end())
            {
                vector<int> temp = {a[i], a[j], third};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            mp.insert(a[j]);
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());

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
