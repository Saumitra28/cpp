#include <iostream>
using namespace std;
int s(int i)
{
    int sm = 0;
    if (i == 0)
        return 0;
    if (i == 1)
        return 1;

    sm = i + s(i - 1);

    return sm;
}
int main()
{
    cout << s(10);
    return 0;
}