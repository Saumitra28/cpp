#include <iostream>
#include <vector>
using namespace std;
// brut
int maxsubarrproduct(vector<int> a)
{
    int n = a.size();
    int maxproduct = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int product = 1;
        for (int j = i; j < n; j++)
        {
            product *= a[j];
            maxproduct = max(maxproduct, product);
        }
    }

    return maxproduct;
}
int main()
{
    vector<int> hm = {1, 2, 3, 4, 5, 0};
    cout << maxsubarrproduct(hm);
    return 0;
}