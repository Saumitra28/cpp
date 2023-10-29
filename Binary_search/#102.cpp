#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// optimal by BS
// Agressive Cows
bool CanWePlaceCows(vector<int> &stallss, int cows, int distance)
{
    int n = stallss.size();
    int cntCows = 1; // yaani ek cow toh humesha hi 0th index pr rahegi !
    int last = stallss[0];
    for (int i = 1; i < n; i++)
    {
        if (stallss[i] - last >= distance)
        {
            cntCows++;
            last = stallss[i];
        }
        if (cntCows >= cows)
            return true;
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int start = 1;
    int n = stalls.size();
    int end = stalls[n - 1] - stalls[0];
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (CanWePlaceCows(stalls, k, mid))
            start = mid + 1;
        else
            end = mid - 1;
    }
    return end;
}
int main()
{
    vector<int> hm = {1, 2, 8, 4, 9};
    cout << aggressiveCows(hm, 3);

    return 0;
}