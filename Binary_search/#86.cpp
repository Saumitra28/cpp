#include <iostream>
#include <vector>
using namespace std;
//finding min in rotated array !
int findmininrotatedarr(vector<int> a)
{
    int n = a.size();
    int start = 0;
    int end = n - 1;
    int ans = INT_MAX;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (a[start] <= a[mid])//vahi sorted hai toh
        {
            ans = min(ans, a[start]); // as agr left half sorted h toh a[start] hi toh sbse chota hoga baaki
            start = mid + 1;          // ki humhe kya hi zaroorat isliye store krney k baad start=mid+1
        }
        else
        {
            ans = min(ans, a[mid]); // as agr right half sorted h toh a[mid] hi toh sbse chota hoga baaki
            end = mid - 1;          // ki humhe kya hi zaroorat isliye store krney k baad end=mid-1
        }
    }
    return ans;
}
int main()
{
    vector<int> hm = {4, 5, 6, 7, 0, 1, 2, 3};
    cout << "Minimun is " << findmininrotatedarr(hm);
    return 0;
}