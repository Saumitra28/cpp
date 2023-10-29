#include <iostream>
#include <vector>
using namespace std;
// finding target key in a rotated array !
// now firstly what is actually rotated array is,it has basically either of the half as sorted
// so we have to use binary search judiciously
// in BS we already know that both halves are sorted but in this case of rotated array
// either half can be sorted and other one may not
// so basically at every new iteration we just have to check that which half is sorted
// then will first find that in sorted half
int findinrotatedarr(vector<int> a, int target)
{
    int n = a.size();
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (a[mid] == target)
            return mid;
        // if left part is sorted
        if (a[start] <= a[mid]) // sort honey ki condition
        {
            // present
            if (a[start] <= target && target <= a[mid])
                end = mid - 1;
            // not present
            else
                start = mid + 1;
        }
        // if right part is sorted
        else
        {
            // present
            if (a[mid] <= target && target <= a[end])
                start = mid + 1;
            // not present
            else
                end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> hm = {3, 4, 5, 0, 0, 1, 2};
    cout << "Element present at index " << findinrotatedarr(hm, 4);

    return 0;
}