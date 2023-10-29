#include <iostream>
#include <vector>
using namespace std;
// index where target element is present,if not present then
// position where element to be inserted
int searhinsert(vector<int> a, int target)
{
    int start = 0;
    int end = a.size() - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (a[mid] >= target)
        {
            if (a[mid] == target)
                return mid;//aagey peechey check krna hi ni apney ko !
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return start; // vahi opposite polarity wala concept
}
int main()
{
    vector<int> hm = {1, 2, 4, 7};
    cout << searhinsert(hm, 6);

    return 0;
}