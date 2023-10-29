#include <iostream>
#include <cmath>
using namespace std;
// koko eating bannanas
int maxz(int piles[], int n)
{
    int maxzz = INT_MIN;
    for (int i = 0; i < n; i++)
        if (piles[i] > maxzz)
            maxzz = piles[i];
    return maxzz;
}
int fn(int piles[], int hourly, int n)
{
    int totalhrs = 0;
    for (int i = 0; i < n; i++)
    {
        totalhrs += ceil(piles[i] / hourly);
    }
    return totalhrs;
}
int minbannas(int piles[], int hrs, int n)
{
    for (int i = 1; i < maxz(piles, n); i++)
    {
        int checkK = fn(piles, i, n);
        if (checkK <= hrs)
            return i + 1;
    }
    return -1;
}
int main()
{
    int arr[] = {30, 11, 23, 4, 20};
    cout << minbannas(arr, 5, 5);

    return 0;
}