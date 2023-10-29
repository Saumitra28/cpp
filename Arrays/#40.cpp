#include <iostream>
#include <unordered_map>
using namespace std;

int majorityElement(int a[], int size)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < size; i++)
        mp[a[i]]++;
    for (auto i : mp)
        if (i.second > (size / 2))
            return i.first;
    return -1;
}

int main()
{
    int arr[] = {3, 1, 2, 3};
    if (majorityElement(arr, 5) == -1)
        cout << "None is is majority";
    else
        cout << "Majority element is " << majorityElement(arr, 4);

    return 0;
}
