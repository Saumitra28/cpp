#include <iostream>
using namespace std;
//leetcode ques when +VEs and -VEs are equal in number

void alternatePandN(int a[], int n)
{
    int ans[n];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            ans[j] = a[i];
            j += 2;
        }
    }
    j = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            ans[j] = a[i];
            j += 2;
        }
    }

    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
}

int main()
{
    int arr[] = {9, 4, -2, -1, 5, 0, -5, -3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    alternatePandN(arr, size); 
    return 0;
}
