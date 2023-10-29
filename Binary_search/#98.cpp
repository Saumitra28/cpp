#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
// ship packages
int findDays(vector<int> &weights, int cap)
{
    int days = 1;
    int load = 0;
    for (int i = 0; i < weights.size(); i++)
    {
        if (weights[i] + load > cap)
        {
            days += 1;
            load = weights[i];
        }
        else
            load += weights[i];
    }
    return days;
}
int leastWeightCapacity(vector<int> &weights, int d)
{
    int start = *max_element(weights.begin(), weights.end());
    int end = accumulate(weights.begin(), weights.end(), 0); // takes sum of array
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (findDays(weights, mid) <= d)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return start;
}

int main()
{
    vector<int> hm = {5, 4, 5, 2, 3, 4, 5, 6};
    cout << leastWeightCapacity(hm, 5);
    return 0;
}