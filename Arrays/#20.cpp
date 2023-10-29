#include <iostream>
using namespace std;
int removeduplicates(int a[], int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (a[i] != a[j])
        {
            a[i + 1] = a[j];
            i++;
        }
    }
    return i + 1;
}
int main()
{
    int arr[] = {1, 1, 2, 2, 2, 3, 3};
    cout << endl
         << removeduplicates(arr, 7);

    return 0;
}