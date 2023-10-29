#include <iostream>
#include <vector>
using namespace std;
//not using BS
int findpeakelement(vector<int> a)
{
    int n = a.size();
    int ans;
    if (a[0] >= a[1])
        return a[0];
    else if (a[n - 1] >= a[n - 2])
        return a[n - 1];
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] >= a[i - 1] && a[i] >= a[i + 1])
            ans = a[i];
    }

    return ans;
}
int main()
{
    vector<int> hm = {3, 5, 4, 1, 1};
    cout << "Peak element is " << findpeakelement(hm);
    return 0;
}