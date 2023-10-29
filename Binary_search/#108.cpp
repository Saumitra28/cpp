#include <bits/stdc++.h>
using namespace std;
int kthElement(vector<int> &nums1, vector<int> &nums2, int n, int m, int l)
{
    int finalArray[n + m];
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (nums1[i] < nums2[j])
            finalArray[k++] = nums1[i++];

        else
            finalArray[k++] = nums2[j++];
    }
    while (i == m - 1)
        finalArray[k++] = nums1[i++];

    while (j == n - 1)
        finalArray[k++] = nums2[j++];
    int start = 0;
    int end = (m + n);
    l--;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (mid == l)
            return finalArray[mid];
        else if (mid < l)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int main()
{
    vector<int> hm1 = {2, 3, 6, 7, 9};
    vector<int> hm2 = {1, 4, 8, 10};

    cout << kthElement(hm1, hm2, hm1.size(), hm2.size(), 5);

    return 0;
}