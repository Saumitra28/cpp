#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int possibledays(vector<int> bloomDay, int m, int day, int k)
{
    int n = bloomDay.size();
    int cnt = 0;
    int noofB = 0; // no of bloom
    for (int i = 0; i < n; i++)
    {
        if (bloomDay[i] <= day) // agr day se chota h bloomDay i.e vo bloom ho chuka h
            cnt++;              // therefore hu mc count kr rhey flowers
        else
        {
            noofB += (cnt / k); // agr bloom ni hua toh counter ko dubara zero !
            cnt = 0;
        }
    }
    noofB += (cnt / k);
    if (noofB >= m) // yaani humney saare boquet bnadiye
        return 1;
    return 0; // nhi toh zero return
}
int minDays(vector<int> &bloomDay, int m, int k)
{

    int n = bloomDay.size();
    if (m * k > n)
        return -1;
    int mini = *min_element(bloomDay.begin(), bloomDay.end());
    int maxi = *max_element(bloomDay.begin(), bloomDay.end());
    for (int i = mini; i < maxi; i++)
    {
        if (possibledays(bloomDay, m, i, k))    
            return i;
    }
    return -1;
}

int main()
{
    vector<int> hm = {1, 2, 3, 10, 10};

    cout << minDays(hm, 3, 2);
    return 0;
}