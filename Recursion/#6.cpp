#include <iostream>
using namespace std;
bool checkPalindrome(int a[], int l, int r)
{
    if (l >= r)
        return true;

    if (a[l] != a[r])
        return false;
    return checkPalindrome(a, l + 1, r - 1);
}
int main()
{
    int arr[] = {1, 2, 1, 3};
    cout << checkPalindrome(arr, 0, 3);
    return 0;
}