#include <iostream>
#include <vector>
using namespace std;
// optimal
int maxsubarrproduct(vector<int> a)
{
    int n = a.size();
    int prefix = 1;
    int suffix = 1;
    int maxproduct = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (prefix == 0)
            prefix = 1;
        if (suffix == 0)
            suffix = 1;
        prefix *= a[i];
        suffix *= a[n - i - 1];
        maxproduct = max(maxproduct, max(prefix, suffix));
    }
    return maxproduct;
}
int main()
{
    vector<int> hm = {3, -1, 2, 5, 6};
    cout << maxsubarrproduct(hm);
    return 0;
}