#include <iostream>
using namespace std;

void nthrow(int n) // n is the row
{
    int ans = 1;
    cout << ans << " "; // Print the first term 1

    for (int i = 1; i < n; i++)
    {
        ans = ans * (n - i) / (i);
        cout << ans << " ";
    }
}

int main()
{
    nthrow(6);
    return 0;
}
