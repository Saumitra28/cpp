#include <iostream>
using namespace std;
void reverseArr(int a[], int l, int r)
{
    if (l >= r)
        return;

    swap(a[l], a[r]);
    reverseArr(a, l + 1, r - 1);
}
int main()
{
    int arr[] = {1, 3, 5, 8, 9, 7};
    reverseArr(arr, 0, 5);
    for (int i = 0; i < 6; i++)
        cout << arr[i] << " ";
    return 0;
}