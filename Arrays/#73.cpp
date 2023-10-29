#include <iostream>
#include <vector>
using namespace std;
// optimal approach !
vector<int> findTwoElement(vector<int> a)
{
    int n = a.size();

    long long sn = (n * (n + 1)) / 2;                // sum of n natural num
    long long s2n = (n * (n + 1) * (2 * n + 1)) / 6; // sum of n sq natural num
    long long s = 0;                                 // sum of actual arr
    long long s2 = 0;                                // sum of sq of each ele in arr
    for (int i = 0; i < n; i++)
    {
        s += a[i];
        s2 += (long long)a[i] * (long long)a[i];
    }
    int val1 = sn - s;   // x-y
    int val2 = s2n - s2; // x2-y2
    val2 = val2 / val1;  // x+y
    long long x = (val1 + val2) / 2;
    long long y = x - val1;

    return {(int)y, (int)x};
}
int main()
{
    vector<int> hm = {2, 2};
    vector<int> result = findTwoElement(hm);
    for (auto i : result)
        cout << i << " ";

    return 0;
}