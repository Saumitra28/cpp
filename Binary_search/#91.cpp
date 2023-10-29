#include <iostream>
using namespace std;
long long int floorSqrt(long long int x)
{
    int start = 1;
    int end = x / 2;
    int ans = 1;
    while (start <= end)
    {
        long long int mid = (start + end) / 2;
        if (mid * mid <= x)
        {
            ans = mid;
            start = mid + 1;
        }
        else
            end = mid - 1;
    }
    return ans;
}
int main()
{
    cout << floorSqrt(3);

    return 0;
}