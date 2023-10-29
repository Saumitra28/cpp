#include <iostream>
#include <vector>
using namespace std;

int totalocc(vector<int> arr, int n, int target)
{
    
    int start = 0;
    int end = n - 1;
    int first = -1;
    int last = -1;

    // Find the first occurrence
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            first = mid;
            end = mid - 1; // Continue searching in the left half
        }
        else if (arr[mid] < target)
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

    // Find the last occurrence
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            last = mid;
            start = mid + 1; // Continue searching in the right half
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    // Calculate the total occurrences
    if (first != -1 && last != -1)
    {
        return last - first + 1;//+1 since zero based indexing
    }
    else
    {
        return 0;
    }
}
int main()
{
    vector<int> hm = {1, 2, 4, 4, 5};
    cout << "total occ" << totalocc(hm, hm.size(), 4);
    return 0;
}