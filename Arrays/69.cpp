#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//overlapping optimal approch, brut chutiya si h 
vector<vector<int>> mergeoverlaapingintervals(vector<vector<int>> &a)
{
    int n = a.size();
    sort(a.begin(), a.end());
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        if (ans.empty() || ans.back()[1] < a[i][0])
            ans.push_back(a[i]);
        else
            ans.back()[1] = max(ans.back()[1], a[i][1]);
    }
    return ans;
}
using namespace std;
int main()
{
    vector<vector<int>> hm = {{1, 3}, {2, 4}, {6, 8}, {9, 10}};
    vector<vector<int>> result = mergeoverlaapingintervals(hm);
    for (const vector<int> &interval : result)
    {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    cout << endl;

    return 0;
}