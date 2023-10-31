#include <iostream>
using namespace std;
// find minimum and swap !
void selectionSort(int a[], int N)
{
    for (int i = 0; i < N - 1; i++)
    {
        int mini = i;
        for (int j = i + 1; j < N; j++)
        {
            if (a[j] < a[mini])
                mini = j;
        }
        swap(a[i], a[mini]);
    }
}
// pushes max to the last by adjacent swapping!
void bubbleSort(int a[], int N)
{
    int flag = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i; j++)
        {
            if (a[j + 1] < a[j])
            {
                swap(a[j], a[j + 1]);
                flag = 1;
            }
        }
        if (!flag)
            break;
    }
} // best case can be O(n) !
// Take an element and place it on it's correct position
void insertionSort(int a[], int N)
{
    for (int i = 0; i < N; i++)
    {
        int j = i;
        while (j > 0 && a[j - 1] > a[j])
        {
            swap(a[j - 1], a[j]);
            j--;
        }
    }
} // best case can be O(n) !
int main()
{
    int n;
    cout << "Enter number of Elements: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Element " << i + 1 << " ";
        cin >> arr[i];
    }
    // selectionSort(arr, n);
    // bubbleSort(arr, n);
    insertionSort(arr, n);
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}