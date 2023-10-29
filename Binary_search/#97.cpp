#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int checkk(vector<int> &num, int div)
{
    int n = num.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
        ans += ceil((double)num[i] / (double)div);

    return ans;
}
int smallestDivisor(vector<int> &arr, int limit)
{
    int start = 1;
    int end = *max_element(arr.begin(), arr.end());
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (checkk(arr, mid) <= limit)
            end = mid - 1; // same koko eating bannas wala concept!
        else
            start = mid + 1;
    }
    return start;
}

int main()
{
    vector<int> hm = {1, 2, 5, 9};
    cout << smallestDivisor(hm, 6);
    return 0;
}