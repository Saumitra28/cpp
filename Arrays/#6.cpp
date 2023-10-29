#include <iostream>
using namespace std;
void binaryof(int n)
{
    if (n > 0)
    {
        binaryof(n / 2);
        cout << n % 2;
    }
}
int main()
{
    binaryof(3);
    return 0;
}