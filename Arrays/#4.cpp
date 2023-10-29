#include <iostream>
using namespace std;
bool checkPalindrome(int a[], int i, int n)
{

    if (a[i] != a[n - i - 1])
        return false;
    checkPalindrome(a, i + 1, n - i - 1);
    return true;
}
int main()
{
    int arr[] = {
        'M',
        'A',
        'D',
        'A',
    };
    cout << checkPalindrome(arr, 0, 4);
    return 0;
}