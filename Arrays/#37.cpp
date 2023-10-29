#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<pair<int, int>> fpairswithgivensum(int a1[], int a2[], int n, int m, int k)
{
    unordered_map<int, int> mp;
    vector<pair<int, int>> ans;
    // for a2[]
    for (int i = 0; i < m; i++)
        mp[a2[i]]++;

    // for checking and storing pairs
    for (int i = 0; i < n; i++)
        if (mp.find(k - a1[i]) != mp.end())
            ans.push_back({a1[i], k - a1[i]});

    return ans;
}
int main()
{
    int arr1[] = {-1, -2, 4, -6, 5, 7};
    int arr2[] = {
        6,
        3,
        4,
    };
    int n = sizeof(arr1) / sizeof(int);
    vector<pair<int, int>> hm = fpairswithgivensum(arr1, arr2, 6, 3, 8);
    for (auto i : hm)
        cout << i.first << "," << i.second << " ";

    return 0;
}