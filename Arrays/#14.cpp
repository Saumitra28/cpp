#include <iostream>
using namespace std;
// pascal triangle term calculator r & c in i/p
// using a modified ncr formula
int ncr(int r, int c)
{
    int R = r - 1;
    int C = c - 1;
    long long int ans = 1;
    for (int i = 0; i < C; i++)
        ans = ans * (R - i) / (i + 1);

    return ans;
}
// to print nth row of pascals triangle
void nthrow(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << ncr(n, i) << " ";
    }
}
// print entire pascal tri of n rows
//but these both functions of printing nth row and pascal tri taking much tc so optimal approach in #15&16.cpp

void pascaltri(int N)
{
    for (int i = 1; i <= N; i++)
    {
        cout << " ";
        nthrow(i);
        cout << endl;
    }
}
int main()
{
    cout << ncr(5, 3) << endl;
    nthrow(5);
    cout << endl;
    pascaltri(6);
    return 0;
}