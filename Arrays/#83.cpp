#include <iostream>
#include <vector>
using namespace std;
// first ans last occ
vector<int> find(vector<int> arr, int n, int x)
{

    int start = 0;
    int end = n - 1;
    int first = -1;
    int last = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == x)
        {
            first = mid;
            end = mid - 1; // Continue searching in the left half
        }
        else if (arr[mid] < x)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    start = 0;
    end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == x)
        {
            last = mid;
            start = mid + 1; // Continue searching in the right half
        }
        else if (arr[mid] < x)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    vector<int> result;
    result.push_back(first);
    result.push_back(last);

    return result;
}
int main()
{
    vector<int> hm = {1, 3, 5, 5, 5, 5, 67, 123, 125};
    vector<int> ans = find(hm, hm.size(), 5);
    for (auto i : ans)
        cout << i << " ";

    return 0;
}