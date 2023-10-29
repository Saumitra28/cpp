#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
// book allocation
int countStudents(vector<int> &arr, int pages)
{
    int students = 1;
    long long pagesStudent = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (pagesStudent + arr[i] <= pages)
            pagesStudent += arr[i];
        else
        {
            students++;
            pagesStudent = arr[i];
        }
    }
    return students;
}
int findPages(vector<int> &arr, int n, int m)
{
    if (m > n)
        return -1;
    int maxElement = *max_element(arr.begin(), arr.end());
    int sum = accumulate(arr.begin(), arr.end(), 0);
    for (int i = maxElement; i <= sum; i++)
    {
        if (countStudents(arr, i) == m)
            return i;
    }
    return -1;
}
int main()
{
    vector<int> hm = {12, 34, 67, 90};
    cout << findPages(hm, hm.size(), 2);
    return 0;
}