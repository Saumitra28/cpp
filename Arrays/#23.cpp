#include <iostream>
using namespace std;
void rotatearray(int a[], int n,int k)
{
    int temp = a[0];
    for (int i = 1; i < n; i++)
        a[i - 1] = a[i];
    a[n - 1] = temp;

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    rotatearray(arr, 7,2);
    return 0;
}