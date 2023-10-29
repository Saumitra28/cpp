#include <iostream>
using namespace std;
// nth root of m number
int fn(int mid, int n, int m)
{
    // return 2 if mid^n > m
    // return 1 if mid^n == m
    // return 0 if mid^n < m
    long long int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= mid;
        if (ans > m)
            return 2;
    }
    if (ans == m)
        return 1;
    return 0;
}
int floorSqrt(int n, int m)
{
    int start = 1;
    int end = m;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (fn(mid, n, m) == 1)
            return mid;
        else if (fn(mid, n, m) == 0)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}
int main()
{
    cout << floorSqrt(3, 27); // cube root of 27 i.e 3

    return 0;
}