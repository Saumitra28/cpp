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
    return start; // ofc we could have returned index, but this is what the opposite polarity concept states
    // for example in these ques end is always pointing to more possible soln where as start is never be the ans so
    // eventually they both points oppositly which states that start will then points to the answer !
}
int main()
{
    vector<int> hm = {3, 5, 8, 15, 19};
    cout << lowerBound(hm, hm.size(), 9);
    return 0;
}