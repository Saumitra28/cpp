#include <iostream>
using namespace std;

void movezerostoend(int a[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            a[j] = a[i];
            j++;
        }
    }

    // Fill the remaining elements with zeros
    while (j < n)
    {
        a[j] = 0;
        j++;
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main()
{
    int arr[] = {1, 2, 0, 1, 0, 4, 0};
    movezerostoend(arr, 7);
    return 0;
}
