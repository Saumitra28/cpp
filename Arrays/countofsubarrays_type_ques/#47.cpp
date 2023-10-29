#include <iostream>
#include <vector>
using namespace std;
// brut approach
int totalSubarraysWithGivenSum(vector<int> &arr, int k)
{
    int n = arr.size();
    int s = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        s = 0;
        for (int j = i; j < n; j++)
        {

            s = s + arr[j];
            if (s == k)
                cnt++;
        }
    }
    return cnt;
}
int main()
{
    vector<int> a = {9, -3, 3, -1, 6, -5, 0};
    cout << totalSubarraysWithGivenSum(a, 0);
    return 0;
}