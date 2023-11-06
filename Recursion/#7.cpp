#include <iostream>
using namespace std;
int nthFiboacii(int n)
{
    if (n <= 1)
        return n;
    return nthFiboacii(n - 1) + nthFiboacii(n - 2);
}
int main()
{
    cout<<nthFiboacii(4);
    return 0;
}