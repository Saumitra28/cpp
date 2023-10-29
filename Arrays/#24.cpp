#include <iostream>
#include <algorithm>
using namespace std;
// rotating array by k places (optimal aproach)
void rotatearrbyk(int a[], int n, int k)
{
    reverse(a, a + k);
    reverse(a + k, a + n);
    reverse(a, a + n);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    rotatearrbyk(arr, 7, 5);
    return 0;
}