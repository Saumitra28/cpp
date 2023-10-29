#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int> &a, int k)
{
    int n = a.size();
    set<vector<int>> st;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            set<long long> mp;
            for (int l = j + 1; l < n; l++) // Changed the loop variable from k to l
            {
                long long fourth = k - (a[i] + a[j] + a[l]);
                if (mp.find(fourth) != mp.end())
                {
                    vector<int> temp = {a[i], a[j], a[l], (int)fourth};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                mp.insert(a[l]);
            }
        }
    }

    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

int main()
{
    vector<int> hm = {10, 2, 3, 4, 5, 7, 8};
    vector<vector<int>> result = fourSum(hm, 23);

    for (const auto &quadruplet : result)
    {
        for (auto num : quadruplet)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
