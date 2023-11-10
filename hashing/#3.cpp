#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
pair<int, int> maxminzFreq(int arr[], int n)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
        mpp[arr[i]]++;

    int maxfreq = 0;
    int minfreq = 0;
    int maxel = 0;
    int minel = 0;

    for (auto i : mpp)
    {
        int element = i.first;
        int count = i.second;
        if (count > maxfreq)
        {
            maxel = element;
            maxfreq = count;
        }
        if (count < maxfreq)
        {
            minel = element;
            minfreq = count;
        }
    }

    return {maxel, minel};
}
int main()
{
    int arr[] = {1, 2, 3, 1, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Max Frequency Element: " << maxminzFreq(arr, n).first << endl;
    cout << "Min Frequency Element: " << maxminzFreq(arr, n).second << endl;

    return 0;

    return 0;
}