#include <iostream>
#include <vector>
using namespace std;
// brut approach
int findLofAllSubarraysWithGivenXOR(vector<int> &arr, int k)
{
    int n = arr.size();
    int xorr = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        xorr = 0;
        for (int j = i; j < n; j++)
        {

            xorr ^= arr[j];
            if (xorr == k)
                cnt++;
        }
    }
    return cnt;
}
int main()
{
    vector<int> a = {4, 2, 2, 6, 4};
    cout << findLofAllSubarraysWithGivenXOR(a, 6);
    return 0;
}