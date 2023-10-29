#include <iostream>
using namespace std;
void sortarray012(int a[], int n)
{
    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            cnt0++;
        if (a[i] == 1)
            cnt1++;
        if (a[i] == 2)
            cnt2++;
    }

    int i = 0;
    while (cnt0--)
        a[i++] = 0;
    while (cnt1--)
        a[i++] = 1;
    while (cnt2--)
        a[i++] = 2;
}
int main()
{
    int arr[] = {0, 2, 1, 2, 0};
    sortarray012(arr, 5);
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    return 0;
}