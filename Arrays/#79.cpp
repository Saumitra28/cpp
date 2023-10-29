#include <iostream>
#include <vector>
using namespace std;
// lower bound using bst
int lowerBound(vector<int> arr, int n, int x)
{
    int start = 0;
    int end = n - 1;
    int mid;
    int index = n;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] >= x) // no equals to if asked upper bound !
        {
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
    vector<int> hm = {1, 2, 2, 3};
    cout << lowerBound(hm, hm.size(), 2);
    return 0;
}