#include <iostream>
#include <vector>
using namespace std;
// ye bhi lower bound se hi hua
//  ek hi m krdiya mene pr webite pr alg ag krk manga hua h !
pair<int, int> floorandceil(vector<int> a, int target)
{
    int start = 0;
    int end = a.size() - 1;
    int floor = -1;
    int ceil = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (a[mid] >= target) // no equals to if asked upper bound !
        {
            ceil = a[mid];
            end = mid - 1;
        }
        if (a[mid] <= target)
        {
            start = mid + 1;
            floor = a[mid];
        }
    }
    return {floor, ceil};
}
int main()
{
    vector<int> hm = {3, 4, 4, 7, 8, 10};
    pair<int, int> ans = floorandceil(hm, 5);
    cout << ans.first << "," << ans.second;

    return 0;
}