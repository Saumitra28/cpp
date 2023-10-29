#include <iostream>
using namespace std;
//optimal approach
void movezerostoend(int a[], int n)
{
    int left = 0; // Pointer for non-zero elements

    // Traverse the array
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            // Swap non-zero element with the left pointer element
            swap(a[i], a[left]);
            left++;
        }
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main()
{
    int arr[] = {1, 2, 0, 5, 0, 7};
    movezerostoend(arr, 6);
    return 0;
}
