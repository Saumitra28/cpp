#include <iostream>
#include <vector>
using namespace std;
vector<pair<int, int>> sellORbuystocks(int a[], int n)
{
    int i = 1;
    int j = 0;
    vector<pair<int, int>> ans;
    while (i < n && j < n)
    {
        if (a[i] - a[i - 1] > 0)
            i++;
        else if (a[i] - a[i - 1] < 0 || i == n - 1)
        {
            if (a[i] - a[i - 1] > 0 && i == n - 1)
                ans.push_back({j, i - 1});
            else
            {
                ans.push_back({j, i - 1});
                j = i;
                i++;
            }
        }
    }
    return ans;
}
int main()
{
    int price[] = {23, 13, 25, 29, 33, 19, 34, 45, 65, 67};
    vector<pair<int, int>> anss = sellORbuystocks(price, 10);
    for (auto i : anss)
        cout << i.first << " " << i.second << endl;
    return 0;
}