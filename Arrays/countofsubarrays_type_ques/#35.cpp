#include <iostream>
using namespace std;
//only for +ves and zeros
//*
int maxsubarrlength(int a[], int n, int k)
{
    int right = 0;
    int left = 0;
    int sum = a[0];
    int maxlength = 0;
    while (right < n)
    {
        while (sum > k && left <= right)
        {
            sum = sum - a[left];
            left++;//shrinking 
        }
        if (sum == k)
            maxlength = max(maxlength, right - left + 1);
        right++;
        if (right < n)
            sum += a[right];
    }
    return maxlength;
}
int main()
{
    int arr[] = {10, 5, 2, 7, 1, 9};
    cout << maxsubarrlength(arr, 6, 15);

    return 0;
}