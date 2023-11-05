#include <iostream>
using namespace std;
void printN(int i, int N)
{
    if (i > N)
        return;
    cout << i << endl;
    printN(i + 1, N); // just swap 7th and 8th line in order to print in reverse order
}
int main()
{
    int n;
    cin >> n;
    printN(1, n);
    return 0;
}