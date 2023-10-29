#include <iostream>
#include <vector>
using namespace std;
vector<int> majorityElement(vector<int> a)
{
    int n = a.size();
    int cnt1 = 0, cnt2 = 0;
    int element1 = INT_MIN, element2 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (cnt1 == 0 && a[i] != element2)
        {
            cnt1 = 1;
            element1 = a[i];
        }
        else if (cnt2 == 0 && a[i] != element1)
        {
            cnt2 = 1;
            element2 = a[i];
        }
        else if (a[i] == element1)
            cnt1++;
        else if (a[i] == element2)
            cnt2++;
        else
        {

            cnt1--;
            cnt2--;
        }
    }
    // confirming that these elements are in mjority or not
    cnt1 = 0;
    cnt2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == element1)
            cnt1++;
        if (a[i] == element2)
            cnt2++;
    }
    int k = (int)n / 3;
    a.clear();
    if (cnt1 > k)
        a.push_back(element1);
    if (cnt2 > k)
        a.push_back(element2);
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