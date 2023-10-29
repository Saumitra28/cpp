#include <iostream>
using namespace std;
int reverse_number(int n)
{
    static long int ans = 0;
    if (n <= 0)
    {
        return ans;
    }
    int remainder = n % 10;
    ans = ans * 10 + remainder;
    reverse_number(n / 10);
    return ans;
}
// bool check(int N)
// {
//     if (rev(N) == N)
//         cout << "Palindrome";
//     else
//         cout << "Not a palindrome";
// }
int main()
{
    int n = 2002;
    if (reverse_number(n) == n)
        cout << "palindrome";
    else
        cout << "Not";
    return 0;
}