#include <iostream>
#include <vector>
using namespace std;
int lenghtoflargestsubarrwithsum0(vector<int> &a)
{
    int n = a.size();
    int maxz = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + a[j];
            if (sum == 0)
                maxz = max(maxz, j - i + 1);
        }
    }
    return maxz;
}
int main()
{
    vector<int> hm = {9, -3, 3, -1, 6, -5};
    int ans = lenghtoflargestsubarrwithsum0(hm);
    cout << ans;
    return 0;
}