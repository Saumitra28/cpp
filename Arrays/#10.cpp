#include <iostream>
using namespace std;
int findmissing(int a[], int n)
{
    int cnt = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] != cnt)
            return cnt;

        cnt++;
    }

    return 0;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 10, 11};
    cout << "Missing is " << findmissing(arr, 10);
    return 0;
}