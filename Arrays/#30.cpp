#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> countnumofconseq1s(int a[], int n)
{
    int cnt = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            cnt++;
            v.push_back(cnt);
        }

        else
            cnt = 0;
    }
    return v;
}
int main()
{
    int arr[] = {1, 0, 1, 1, 0, 1,};
    vector<int> ans = countnumofconseq1s(arr, 8);
    cout << *max_element(ans.begin(), ans.end());
    return 0;
}