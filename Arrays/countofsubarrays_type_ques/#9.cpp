#include <iostream>
using namespace std;
void sumofsubarr(int a[], int n, int k)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            s = s + a[j];
            if (s == k)
            {
                cout << i + 1 << " " << j + 1;
                return;
            }
        }
        s = 0;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    sumofsubarr(arr, 10, 15);
    return 0;
}