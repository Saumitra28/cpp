#include <iostream>
#include <vector>
using namespace std;
// lower bound using bst
int lastocc(vector<int> arr, int n, int x)
{
    int start = 0;
    int end = n - 1;
    int mid;
    int index = -1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == x)
        {
            index = mid;
            start = mid + 1;
        }

        else if (arr[mid] < x)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return index;
}
int main()
{
    vector<int> hm = {1, 2, 2, 3};
    cout << lastocc(hm, hm.size(), 2);
    return 0;
}