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
    int start = *max_element(arr.begin(), arr.end());
    int end = accumulate(arr.begin(), arr.end(), 0);
    while (start <= end)
    {
        int mid = (start + end) / 2;
        int students = countStudents(arr, mid);
        if (students > m)
            start = mid + 1; // yaani y number of students zada return kr rha tb humhe aagey hi jana hoga kyuki jini zada
        // pages utney ki km students to be distributed !
        else
            end = mid - 1;
    }
    return start;
}
int main()
{
    vector<int> hm = {12, 34, 67, 90};
    cout << findPages(hm, hm.size(), 2);
    return 0;
}