#include <iostream>
#include <vector>
using namespace std;
//brut
void moveZeroes(vector<int> &nums)
{
    int n = nums.size();
    vector<int> arr(n, 0);

    for (int i = 0, j = 0; i < n; i++)
        if (nums[i] != 0)
            arr[j++] = nums[i];

    int j = arr.size();
    for (int i = 0; i < arr.size(); i++)
        if (nums[i] == 0)
            arr[j++] = nums[i];

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
}

int main()
{
    vector<int> a = {0, 1, 0, 3, 12, 0, 0, 0, 12, 29, 93};
    moveZeroes(a);

    return 0;
}
