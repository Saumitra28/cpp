#include <bits/stdc++.h>
using namespace std;

int countfreq(int num, int a[], int n)
{
    int maxVal = *max_element(a, a + n);
    int *hashArr = new int[maxVal + 1];

    for (int i = 0; i <= maxVal; i++)
        hashArr[i] = 0;

    for (int i = 0; i < n; i++)
        hashArr[a[i]]++; // for chars it will be s[i]-'a'!

    int frequency = hashArr[num];
    delete[] hashArr;

    return frequency;
}

int main()
{
    int arr[] = {1, 4, 2, 7, 3, 2, 9, 7};
    int frequency = countfreq(7, arr, 8);
    cout << "Frequency of 7 in the array: " << frequency << endl;
    return 0;
}
