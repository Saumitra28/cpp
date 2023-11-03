#include <iostream>
using namespace std;
int countDigits(int n)
{
    int x = n;
    int dig;
    int cnt = 0;//or other way to count is (int)log10(n)+1 !
    while (x)
    {
        dig = x % 10;
        if (n % dig == 0)
            cnt++;
        x = x / 10;
    }

    return cnt;
}
int main()
{
    cout << countDigits(660);
    return 0;
}