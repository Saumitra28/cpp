#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> leaderinthearray(int a[], int n)
{
    vector<int> ans;
    int j = 0;
    ans.push_back(a[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] > a[i + 1] && a[i] > ans[j])
        {
            ans.push_back(a[i]);
            j++;
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 0};
    vector<int> hm = leaderinthearray(arr, 5);
    for (auto i : hm)
        cout << i << " ";
    return 0;
}
