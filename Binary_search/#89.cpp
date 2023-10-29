#include <iostream>
#include <vector>
using namespace std;
// using BS
int findpeakelement(vector<int> a)
{
    int n = a.size();
    int start = 1;
    int end = n - 2;
    if (a[0] > a[1])
        return a[0];
    else if (a[n - 1] > a[n - 2])
        return a[n - 1];
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (a[mid] > a[mid - 1] && a[mid] > a[mid + 1])
            return a[mid];
        else if (a[mid] > a[mid - 1])
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}
int main()
{
    vector<int> hm = {1, 2, 3, 1};
    cout << "Peak element is " << findpeakelement(hm);
    return 0;
}