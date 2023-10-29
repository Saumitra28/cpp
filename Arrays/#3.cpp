#include <iostream>
using namespace std;
void reversearr(int a[], int i, int j)
{
    if (i > j)
        return;
    swap(a[i], a[j]);
    reversearr(a, i + 1, j - 1);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    reversearr(arr, 0, 5);
    for (int i = 0; i < 6; i++)
        cout << arr[i] << " ";
    return 0;
}