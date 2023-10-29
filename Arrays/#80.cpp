#include <iostream>
#include <vector>
using namespace std;
// index where target element is present,jif not present then
// position where element to be inserted
int searhinsert(vector<int> a, int target)
{
    int start = 0;
    int end = a.size() - 1;
    int index = a.size();
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (a[mid] >= target) // no equals to if asked upper bound !
        {
            if (a[mid] == target)
                return mid;
            index = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return index;
}
int main()
{
    vector<int> hm = {1, 3, 5, 6};
    cout << searhinsert(hm, 4);

    return 0;
}