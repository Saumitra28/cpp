#include <iostream>
using namespace std;
int findmissimg(int a[], int n)
{
    int ans1 = 0;
    int ans2 = 0;
    for (int i = 0; i < n; i++)
    {
        ans1 = ans1 ^ a[i];
        ans2 = ans2 ^ (i + 1);
    }
    ans2 = ans2 ^ n;
    int ans = ans1 ^ ans2;
    return ans;
}

int main()
{

    int arr[] = {2, 5, 3, 1};
    cout << findmissimg(arr, 4);
    return 0;
}