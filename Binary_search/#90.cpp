#include <iostream>
#include <vector>
using namespace std;
int occonce(vector<int> a)
{
    int n = a.size();
    int start = 1;
    int end = n - 2;
    // Edge cases:
    if (a[0] != a[1])
        return a[0];
    else if (a[n - 1] != a[n - 2])
        return a[n - 1];

    while (start <= end)
    {
        int mid = (start + end) / 2;

        // if arr[mid] is the single element:
        if (a[mid] != a[mid - 1] && a[mid] != a[mid + 1])
            return a[mid];
        // we are in the left:
        if (mid % 2 == 1 && a[mid] == a[mid - 1] || mid % 2 == 0 && a[mid] == a[mid + 1])
            start = mid + 1;
            
        // we are in the right:
        else
            end = mid - 1;
    }
    return -1;
}
int main()
{
    vector<int> hm = {1, 1, 2, 2, 3, 3, 4, 50, 50, 65, 65};
    cout << "Element occuring once is " << occonce(hm);

    return 0;
}