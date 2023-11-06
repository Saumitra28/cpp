#include <iostream>
using namespace std;
int sumN(int N)
{
    if (N == 0)
        return N + sumN(N - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << "Sum is: " << sumN(n);
    return 0;
}
//Note: for factorial just replace + by * !