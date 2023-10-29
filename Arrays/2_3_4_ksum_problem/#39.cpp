#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// vahi two sum vala ques leetcode wala single array wala
// optimal approach will be a two pointer+greedy approach
vector<pair<int, int>> twosum(int a[], int n, int k)
{
    vector<pair<int, int>> ans;
    sort(a, a + n);
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        int sum = a[left] + a[right];
        if (sum == k)
            ans.push_back({left, right});
        else if (sum > k)
            right--;
        else
            left++;
    }
    return ans;
}
int main()
{
    int arr[] = {1, 3, 6, 2, 5, 9};
    vector<pair<int, int>> hm = twosum(arr, 6, 7);

    for (auto i : hm)
        cout << i.first << "," << i.second << " ";
    return 0;
}