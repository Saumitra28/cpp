#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//brut
int findKthPositive(vector<int> &arr, int k)
{
    int n = arr.size();
    vector<int> hashmiss(*max_element(arr.begin(), arr.end()) + 1);
    for (int i = 0; i < hashmiss.size(); i++)
        hashmiss[i] = i + 1;
    int cnt = 0;
    int element;
    for (int i = 0; i < hashmiss.size(); i++)
    {
        if (find(arr.begin(), arr.end(), hashmiss[i]) == arr.end())
        {
            cnt++;
            element = hashmiss[i];
            if (cnt == k)
                return element;
        }
    }
    int m = hashmiss.size();
    while (cnt != k)
    {
        m++;
        cnt++;
        if (cnt == k)
            return m;
    }

    return -1;
}
int main()
{
    vector<int> hm = {1, 2, 3, 4};
    cout << findKthPositive(hm, 2);
    return 0;
}