#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
// koko eating bannanas
int totalhrs(vector<int> piles, int hourly)
{
    int totalhours = 0;
    int n = piles.size();
    for (int i = 0; i < n; i++)
        totalhours += ceil((double)piles[i] / (double)hourly);

    return totalhours;
}
int minbannas(vector<int> piles, int hrs)
{
    int n = piles.size();
    int start = 1;
    int end = *max_element(piles.begin(), piles.end());
    int ans = 0;
    while (start <= end)
    {

        int mid = (start + end) / 2;
        if (totalhrs(piles, mid) <= hrs)
        {
            ans = mid;
            end = mid - 1; // why,coz if  mid is possible then difinitely uskey baad waley toh hongey
                           // hi possible but we want smallest k
        }
        else
            start = mid + 1;
    }
    return ans;
}
int main()
{
    vector<int> hm = {30, 11, 23, 4, 20};
    cout << minbannas(hm, 5);

    return 0;
}
