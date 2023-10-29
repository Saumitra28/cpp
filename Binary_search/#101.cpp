#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
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
    int mini = *min_element(stalls.begin(), stalls.end());
    int maxi = *max_element(stalls.begin(), stalls.end());
    for (int i = 1; i <= (maxi - mini); i++)
    {
        if (CanWePlaceCows(stalls, k, i))
            continue;
        else
            return i - 1;
    }
    return -1;
}
int main()
{
    vector<int> hm = {1, 2, 8, 4, 9};
    cout << aggressiveCows(hm, 3);

    return 0;
}