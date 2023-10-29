#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
//majority element ouccurring more than n/3 times
vector<int> majorityElement(vector<int> a)
{

    int size = a.size();

    unordered_map<int, int> mp;
    for (int i = 0; i < size; i++)
        mp[a[i]]++;
    a.clear();
    for (auto i : mp)
        if (i.second > (size / 3))
            a.push_back(i.first);

    sort(a.begin(), a.end());

    return a;
}
int main()
{
    vector<int> nums = {1, 1, 1, 2, 2, 2}; // Example input

    vector<int> result = majorityElement(nums);

    cout << "Majority Elements: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}