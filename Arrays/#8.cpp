#include <iostream>
using namespace std;
void zigzag(int a[], int n)
{
    int j, k;
    for (int i = 0; i < n; i += 3)
    {
        j = i + 1;
        k = i + 2;
        if (j < n && k < n)
        {
            if (a[i] > a[j])
                swap(a[i], a[j]);
            if (a[j] < a[k])
                swap(a[j], a[k]);
        }
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
int main()
{
    int arr[] = {4, 3, 7, 8, 6, 2, 1};
    zigzag(arr, 7);

    return 0;
}