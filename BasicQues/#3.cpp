#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    int n = a < b ? a : b;
    int ans = 1;
    for (int i = 1; i < n; i++)
    {
        if (a % i == 0 && b % i == 0)
            ans = i;
    }
    return ans;
}
// OR by Euilateral algo:
// int gcd(int a, int b)
// {
//     while (a > 0 && b > 0)
//     {
//         if (a > b)
//             a = a % b;
//         else
//             b = b % a;
//         if (a == 0)
//             return b;
//         return a;
//     }
// }
int main()
{

    return 0;
}