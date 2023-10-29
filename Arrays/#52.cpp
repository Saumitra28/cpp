#include <iostream>
#include <map>
#include <set>
using namespace std;

int main()
{
    int arr[] = {34, 2, 7, 23, 31, 38, 13, 11, 37, 19, 45, 6};
    map<int, int> mp;
    set<int> ans;

    for (int i = 0; i < 12; i++)
        mp[arr[i]]++;

    auto current = mp.begin();
    auto next = mp.begin();
    next++;

    while (next != mp.end())
    {
        if (current->first + 1 == next->first)
        {
            ans.insert(current->first);
            ans.insert(next->first);
            current++;
        }
        next++;
    }
    cout << "Longest subsequence: ";
    for (auto i : ans)
        cout << i << " ";

    return 0;
}
