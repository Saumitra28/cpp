#include <iostream>
#include <cmath>
using namespace std;

// Armstrong number
int digitcount(int n)
{
    int cnt = 0;
    while (n)
    {
        n /= 10;
        cnt++;
    }
    return cnt;
}
bool armstrongornot(int n)
{
    int dc = digitcount(n);
    int x = n;
    int md;
    int s = 0;
    while (x)
    {
        md = x % 10;
        s = s + pow(md, dc);
        x = x / 10;
    }
    if (s == n)
        return true;
    return false;
}
int main()
{

    cout << armstrongornot(9);
    return 0;
}
